#include <unistd.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: integer to get value of
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: integer if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((index >= 64) || (n == NULL))
		return (-1);
	*n = ~(1UL << index) & *n;
	return (1);
}
