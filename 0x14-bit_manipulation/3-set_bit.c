#include "main.h"
/**
 * set_bit - set the value of a bit at a given index
 * @n: integer to get value of
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: integer if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1)
	
	if (index >= 64)
		return (-1);
	*n = (1 << index) | *n;
	return (*n);
}
