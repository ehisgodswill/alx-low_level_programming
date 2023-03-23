#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int sum = 0, i = 0;

	va_start(ar, n);
	while (i++ < n)
		sum += va_arg(ar, int);
	va_end(ar);
	return (sum);
}
