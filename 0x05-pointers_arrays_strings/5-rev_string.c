#include "main.h"

/**
 * rev_string - function that reverse string
 * @s: string
 * Return: nothing
*/
void rev_string(char *s)
{
	char t[] = *s;
	int i, j = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		t[j] = s[i];
		j++;
		i--;
	}
}
