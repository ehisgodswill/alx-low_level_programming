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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
		if (j == n)
		{
			dest[i] = '\0';
			break;
		}
	}
	return (dest);
}
