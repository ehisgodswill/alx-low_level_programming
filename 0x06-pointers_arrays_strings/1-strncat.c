#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: destination
 * @src: source string
 * Return: return pointer to dest
*/
char _strcat(char *dest, char *src)
{
	char *temp = dest;
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
	    i++;
	}
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	return (*temp);
}
