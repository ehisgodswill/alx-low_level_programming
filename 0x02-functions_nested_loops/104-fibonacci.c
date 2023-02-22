#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	double p = 1, q = 2, r;

	printf("%g, %g, ", p, q);
	for (i = 2; i < 98; i++)
	{
		r = p + q;
		p = q;
		q = r;
		if (i == 97)
			printf("%g\n", r);
		else
			printf("%g, ", r);
	}

	return (0);
}
