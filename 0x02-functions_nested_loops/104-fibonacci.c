#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j = 1, k = 2, r;
	/*
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	*/
	printf("%d, %d, ", j, k);
	for (i = 2; i < 98; i++)
	{
		r = j + k;
		j = k;
		k = r;
		if (i == 97)
			printf("%d\n", r);
		else
			printf("%d, ", r);
	}

	return (0);
}
