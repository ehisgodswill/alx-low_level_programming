#include "main.h"

/**
 * rev_string - function that reverse string
 * @s: string
 * Return: nothing
*/
void rev_string(char *s)
{
	char t;
	int i, j = 0;

	while (s[i] != '\0')
		i++;

	while (i-- >= j)
	{
		t = s[j];
		s[j] = s[i];
		s[i] = t;
		j++;
	}
}
