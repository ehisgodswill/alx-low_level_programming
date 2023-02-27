#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: A pointer to destination of the string
 * @src: A pointer to source of the string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *aux;

	while (*src)
		*dest++ = *src++;
	aux = dest;
	return (aux);
}
