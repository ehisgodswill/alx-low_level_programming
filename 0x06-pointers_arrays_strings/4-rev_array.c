#include "main.h"

/**
 * reverse_array - function
 * @a: integer a
 * @n: integer n
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
	int t, i = 0;

	while (i < n--)
	{
		t = a[i];
		a[i++] = a[n];
		a[n] = t;
	}
}
