#include "main.h"
#include <stdblib.h>

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

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	bfr = malloc(sizeof(char) * letters);
	rs = read(fd, bfr, letters);
	wrt = write(STDOUT_FILENO, bfr, rs);

	free(bfr);
	close(fd);
	return (wrt);
}
