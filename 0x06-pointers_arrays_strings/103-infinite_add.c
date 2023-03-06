#include "main.h"

/**
 * *infinite_add - add infinite numbers
 * @n1: integer
 * @n2: integer
 * @r: result
 * @size_r: size of buffer
 * Return: result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, len;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > len2)
		len = len1;
	else
		len = len2;
	if (len >= size_r)
		return (0);
}
