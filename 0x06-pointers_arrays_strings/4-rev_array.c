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

	while (i <= n / 2)
	{
		t = a[i];
		a[i] = a[n - i];
		a[n - i] = t;
		i++;
	}
}
