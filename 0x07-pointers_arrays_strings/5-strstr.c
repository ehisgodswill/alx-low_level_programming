#include "main.h"

#include <stdio.h>

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (*haystack)
	{
		while (needle[j] != '\0')
		{
			if (haystack[i++] != needle[j++])
				break;
		}
		if (needle[j] == '\0')
			return (haystack);
		j = 0;
		i = 0;
		haystack++;
	}
	return (NULL);
}
