#include "main.h"

/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	int i;
	
	if (n == 1)
		return (1);
	for (i = 1; i <= n / 2; i++)
	{
		if (n / i == i && n % i == 0)
			return (i);
	}
	return (-1);

}
