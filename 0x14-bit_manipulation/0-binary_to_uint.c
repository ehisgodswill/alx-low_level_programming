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

	while (b[f++])
	{
		len++;
	}
	f = 0;

	while (--len >= 0)
	{
		if (b[len] == '1')
		{
			a += pow(2, f);
		}
		else if (b[len] == '0')
		{
		}
		else
		{
			return (0);
		}

		f++;
	}
	return (a);
}
