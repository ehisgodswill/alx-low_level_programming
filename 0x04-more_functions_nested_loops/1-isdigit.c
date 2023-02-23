#include "main.h"

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
