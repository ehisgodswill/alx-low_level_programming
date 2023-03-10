#include <stdio.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = argv[1] - '0';
		num2 = argv[2] - '0';
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
