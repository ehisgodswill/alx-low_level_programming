#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int xf = 0, xb = 1, yf = 0, yb = 2;
	unsigned long int rf = 0, rb = 0, div = 10000000000;

	printf("%lu, %lu, ", xb, yb);
	for (i = 2; i < 98; i++)
	{
		if (xb + yb >= div || rf > 0)
		{
			rf = xf + yf + ((xb + yb) / div);
			rb = (xb + yb) % div;
			printf("%lu%010lu", rf, rb);
			xf = yf, xb = yb;
			yf = rf, yb = rb;

		}
		else
		{
			rb = xb + yb;
			xb = yb, yb = rb;
			printf("%lu", rb);

		}

		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
