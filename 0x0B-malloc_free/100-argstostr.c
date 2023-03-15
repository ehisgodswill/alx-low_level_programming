#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all arguments of your program
 * @ac: number of arguments
 * @av: array containing arguments
 * Return: A pointer to string that containing all arguments
 * or NULL if ac == 0, if av == NULL, or upon failure
 */
char *argstostr(int ac, char **av)
{
	char *newstr;
	int len = 0, i, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len++;
	newstr = malloc(sizeof(char) * len);
	if (newstr == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			newstr[len++] = av[i][j];
		newstr[len++] = '\n';
	}
	newstr[len] = '\0';
	return (newstr);
}
