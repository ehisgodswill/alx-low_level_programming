#include "main.h"
/**
 * print_array - prints n elements of an array of integers, 
 * followed by a new line
 * @a: pointer integer to array
 * @n: integer n is the number of elements of the array to be printed
 * Return: nothing
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
