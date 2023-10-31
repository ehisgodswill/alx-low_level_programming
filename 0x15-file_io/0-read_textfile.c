#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * read_textfile- Read a text file and print to STDOUT.
 * @filename: text file
 * @letters: number of letters to read or print
 * Return: w- actual number of bytes of letters it could read and print
 * 0 if write fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wrt, fd, rs;
	char *bfr;

	if (filename == NULL)
		return (0);


	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bfr = malloc(sizeof(char) * letters);
	if (bfr == NULL)
		return (0);

	rs = read(fd, bfr, letters);
	wrt = write(STDOUT_FILENO, bfr, rs);

	if (fd == -1 || rs == -1 || wrt == -1 || wrt != rs)
	{
		free(bfr);
		return (0);
	}
	free(bfr);
	close(fd);
	return (wrt);
}
