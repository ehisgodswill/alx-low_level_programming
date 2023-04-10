#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char* temp = malloc(sizeof(char) * letters);
	int fdo, fdr, fdw;

	if (filename == NULL || temp == NULL)
		return (0);
	fdo = open(filename, O_READONLY);
	if (fdo < 0)
	{
		free(temp);
		return (0);
	}
	fdr = read(fdo, temp, letters)
	if (fdr < 0)
	{
		free(temp);
		return (0);
	}
	fdw = write(STDOUT_FILENO, temp, fdr)
	free(temp);
	close(fdo);
	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}
