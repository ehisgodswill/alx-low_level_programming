#include "main.h"
#include <stdlib.h>

/**
 * main - Copies the contents of a file to another file.
 * @ac: The number of arguments supplied to the program.
 * @av: An array of pointers to the arguments.
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code = 97.
 * If file_from does not exist or cannot be read - exit code = 98.
 * If file_to cannot be created or written to - exit code = 99.
 * If file_to or file_from cannot be closed - exit code = 100.
 */
int main(int ac, char *av[])
{
	int frm, to, rd, wr, cl;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	frm = open(av[1], O_RDONLY);
	rd = read(frm, buf, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		if (frm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wr = write(to, buf, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		rd = read(frm, buf, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buf);
	cl = close(frm);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", frm);
		exit(100);
	}

	cl = close(to);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}

	return (0);
}
