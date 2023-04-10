#include "main.h"

/**
 * set_bit - A function that sets a bit at given index to 1
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 0x01 << index;

	if (bit == 0 || index > sizeof(unsigned long int) * 8)
		return (-1);
	*n |= bit;
	if (*n & bit)
		return (1);
	return (-1);
}
