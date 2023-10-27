#include "main.h"
#include <unistd.h>
/**
 * set_bit - set the value of a bit at a given index
 * @n: integer to get value of
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: integer if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 0;

	if ((index >= 64) || n == NULL)
		return (-1);

	temp = 1 << index;
	*n |= temp;
	return (1);
}
