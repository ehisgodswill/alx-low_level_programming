#include "main.h"

/**
 * get_endianness - A function that checks endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 0x0102;
	char *c = (char *)&i;

	if (*c == 0x02)
		return (1);
	return (0);
}
