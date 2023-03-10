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
	int num, result = 0, n = 0, i;

	while (++n < argc)
	{
		i = 0;
		while (argv[n][i])
		{
			if (!(isdigit(argv[n][i])))
			{
				printf("Error\n");
				return (1);
			}
			i++
		}
		num = atoi(argv[n]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
