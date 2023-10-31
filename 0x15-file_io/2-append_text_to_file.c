#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a particular file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);
	return (1);
}
