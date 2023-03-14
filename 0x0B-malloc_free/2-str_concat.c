#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int k = 0, i = 0, j = 0;

	while (s1 && *s1++)
		i++;
	s1 = s1 - i - 1;
	while (s2 && *s2++)
		j++;
	s2 = s2 - j - 1;

	newstr = malloc((i + j + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	while (k < i)
		newstr[k++] = *s1++;
	while (k < (i + j))
		newstr[k++] = *s2++;
	newstr[++k] = '\0';
	return (newstr);
}
