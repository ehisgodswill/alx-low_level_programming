#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0, i = 0;

	while (*s)
	{
		while (accept[i] != '\0')
		{
			if (s[0] == accept[i])
				r++;
			i++;
		}
		i = 0;
		if (s[0] == ' ')
			break;
		s++;
	}
	return (r);
}
