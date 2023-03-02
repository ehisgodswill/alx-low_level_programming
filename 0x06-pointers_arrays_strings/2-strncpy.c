#include "main.h"

/**
 * *_strncpy - function name
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *temp = dest;

	while (*src && i < n)
	{
		*dest++ = *src++;
		i++;
	}
	while (i < n)
	{
		*dest++ = '\0';
		i++;
	}
	return (temp);
}
