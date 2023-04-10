#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written,
 * nor write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fdo, fdw;

	if (filename == NULL)
		return (-1);
	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (fdo < 0)
		return (-1);	
	fdw = write(fdo, text_content, strlen(text_content));
	close(fdo);
	if (fdw < 0)
		return (-1);
	return (1);	
}
