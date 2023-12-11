#include "main.h"

/**
 * _isalpha - check for alphabeth character
 * @c: input character
 * Description: Returns 1 if c is a letter, lowercase or uppercase
 * Return: 0 otherwise
*/

int _isalpha(int c)
{
	int i;

	for (i = 'A'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}

/**
 *_atoi - converts a string of numbers to an integer
 *@str: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *str)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  str[i] != '\0' && flag != 2; i++)
	{
		if (str[i] == '-')
			sign *= -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (str[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
	if (sign == -1)
		output = -result;
	else
		output = result;
	return (output);
}

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
		while (accept[i] != '\0')
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
