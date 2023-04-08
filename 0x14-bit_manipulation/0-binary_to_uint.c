#include "main.h"

/**
 * binary_to_uint - A finction that converts binary number
 * to an unsigned integer
 * @b: A pointer to binary string
 * Return: unsigned integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, pow = 1;
	unsigned int r = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	while (len)
	{
		if (b[len - 1] == '0')
			r += 0;
		else if (b[len - 1] == '1')
			r += pow;
		else
			return (0);
		pow *= 2;
		len--;
	}
	return (r);
}
