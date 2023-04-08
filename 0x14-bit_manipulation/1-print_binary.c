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
		putchar('0');
	while (max--)
	{
		int b = (n >> max) & 1;

		if (b && !flag)
			flag = 1;
		if (!b && flag)
			putchar('0');
		else if (b && flag)
			putchar('1');
	}
}
{
	unsigned int flag = 0, max = 32768; /* 1000 0000 0000 0000 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (flag == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		max >>= 1;
	}
}
