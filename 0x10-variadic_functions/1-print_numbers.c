#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, n);
	while (i++ < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator == NULL)
			continue;
		if (i != n)
			printf("%c", *separator);
		else
			printf("\n");
	}
	va_end(ap);
}
