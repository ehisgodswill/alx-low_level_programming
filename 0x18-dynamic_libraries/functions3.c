#include "main.h"

/**
 *_abs - Check Description
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolute value of number r
 */

int _abs(int r)
{
	int n = r;

	if (n < 0)
		n *= -1;
	return (n);
}

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	int a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
			return (1);
	}
	return (0);
}

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: An input integer
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == c)
			return (1);
	}
	return (0);
}

/**
 * _memset - a function that fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*s++ = b;
	}
	return (p);
}

/**
 * _memcpy - a function that copys memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while  (n--)
	{
		*dest++ = *src++;
	}
	return (p);
}
