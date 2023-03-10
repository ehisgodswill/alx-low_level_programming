#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers
 * @argc: The arguments' counter
 * @argv: The argument's values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int num, result = 0, n = 0;

	while (++n < argc)
	{
		num = atoi(argv[n]);
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			result += num;
	}
	printf("%d\n", result);
	return (0);
}
