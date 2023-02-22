#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	float p = 1, q = 2, r;

	printf("%f, %f, ", p, q);
	for (i = 2; i < 98; i++)
	{
		r = p + q;
		p = q;
		q = r;
		if (i == 97)
			printf("%f\n", r);
		else
			printf("%f, ", r);
	}

	return (0);
}
