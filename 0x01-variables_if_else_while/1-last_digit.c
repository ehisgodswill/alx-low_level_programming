#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: exit point
*/

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	return (0);
}
