#include "main.h"

/**
 * print_last_digit - Check Description
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int n = r;

	if (n < 0)
		n *= -1;
	n %= 10;
	_putchar(n + '0');
	return (n);
}
