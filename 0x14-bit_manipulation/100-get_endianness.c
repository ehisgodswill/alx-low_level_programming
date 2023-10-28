#include "main.h"

/**
 * get_endianness - gets the endianess
 * Return: 0 if little endian, 1 if Big endian
*/
int get_endianness(void)
{
	int a = 1;
	char* b = (char*)&a;

	return (*b);
}