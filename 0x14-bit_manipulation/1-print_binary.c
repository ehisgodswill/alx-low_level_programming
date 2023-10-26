#include "main.h"

/**
 * print_binary - A function that prints binary from integer
 * @n: integer
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned long int t = n;
	int s = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (t)
	{
		t >>= 1;
		s++;
	}

	while (--s >= 0)
	{
		if ((n >> s) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
