#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int max = sizeof(unsigned long int) * 8, flag = 0;

	if (n == 0)
		_putchar('0');
	while (max--)
	{
		int b = (n >> max) & 1;

		if (b && !flag)
			flag = 1;
		if (!b && flag)
			_putchar('0');
		else if (b && flag)
			_putchar('1');
	}
}
