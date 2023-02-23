#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
*/

int main(void)
{
	int i = 1;

	for (; i <= 100 ; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if ((i % 5 != 0) && (i % 3 != 0))
			printf("%d ", i);
		printf(' ');
	}
	printf("\n");

	return (0);
}
