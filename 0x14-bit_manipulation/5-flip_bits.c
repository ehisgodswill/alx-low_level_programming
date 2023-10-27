#include "main.h"
/**
 * flip_bits - sets the value of a bit at a given index to 0
 * @n: integer to get value of
 * @m: is the index, starting from 0 of the bit you want to set
 * Return: integer if it worked, or -1 if an error occurred
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	int i = 0, r = 0;

	while (i < 64)
	{
		if (d & 1)
			r++;
		d >>= 1;
		i++;
	}

	return ((r));
}
