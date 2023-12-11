#include "main.h"
#include <unistd.h>

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
 **_strchr - locates a character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

/**
 * _strlen - returns the length of a string
 * @str: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *str)
{
	int len = 0;

	if (!str)
		return (0);
	while (*str++)
		len++;
	return (len);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *_puts - prints a string
 *@str: the string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
