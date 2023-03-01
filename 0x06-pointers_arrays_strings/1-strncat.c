#include "main.h"

/**
 * _strncat - similar to strcat function
 * @dest: char destination
 * @src: source
 * @n: number
 * Return: character
*/
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (dest);
}
