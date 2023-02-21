#include "main.h"

/**
 * main- entry point
 *
 * Description: prints out the alphabeth in lower case
 *
 * Return: 0 success
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
