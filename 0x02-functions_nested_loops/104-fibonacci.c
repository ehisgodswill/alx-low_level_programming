#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int p = 1, q = 2, r;

	printf("%d, %d, ", p, q);
	for (i = 2; i < 98; i++)
	{
		r = p + q;
		p = q;
		q = r;
		if (i == 97)
			printf("%ld\n", r);
		else
			printf("%ld, ", r);
	}

	return (0);
}
