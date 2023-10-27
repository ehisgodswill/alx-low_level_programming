#include "main.h"
#include <math.h>

/**
 * binary_to_uint - A function that converts binaryto integer.
 * @b: pointer to string
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int f = 0;
	int len = 0;

	if (b == NULL)
		return (0);
	while (b[f++])
	{
		len++;
	}
	f = 1;

	while (--len >= 0)
	{
		a += (b[len] - 48) * f;
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}
		f *= 2;
	}
	return (a);
}
