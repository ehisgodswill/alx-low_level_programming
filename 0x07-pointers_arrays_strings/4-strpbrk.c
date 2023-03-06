#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s)
	{
		while(accept[i] != '\0')
		{
			if (s[0] == accept[i])
				return (s);
			i++;
		}
		i = 0;
		s++;
	}
	return (NULL);
}
