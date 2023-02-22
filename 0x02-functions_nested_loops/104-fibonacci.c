#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long long int p = 1, q = 2, r;

	printf("%llu, %llu, ", p, q);
	for (i = 2; i < 98; i++)
	{
		r = p + q;
		p = q;
		q = r;
		if (i == 97)
			printf("%llu\n", r);
		else
			printf("%llu, ", r);
	}

	return (0);
}
