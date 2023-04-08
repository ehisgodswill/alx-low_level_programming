#include "main.h"

/**
 * get_bit - A function that gets a bit at index
 * @n: The number to get bit from
 * @index: The index where the bit get at
 * Return: The value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max = 0x01 << index;

	if (max == 0 || index >= sizeof(unsigned int) * 8)
		return (-1);

	if ((n & max))
		return (1);
	return (0);
}
