#include "main.h"
#include <stdlib.h>

char *create_buffer(char *f);
void close_file(int f);

/**
 * main - Copies the contents of a file to another file.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code = 97.
 * If file_from does not exist or cannot be read - exit code = 98.
 * If file_to cannot be created or written to - exit code = 99.
 * If file_to or file_from cannot be closed - exit code = 100.
 */
int main(int ac, char *av[])
{
	int from, to, rd, wr;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(av[2]);
	from = open(av[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);

}

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @f: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *f)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @f: The file descriptor to be closed.
 */
void close_file(int f)
{
	int c;

	c = close(f);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
