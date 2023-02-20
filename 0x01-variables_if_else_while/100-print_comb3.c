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
	int n, o;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != o)
		{
			for (o = n + 1; o <= '9'; o++)
			{
				putchar(n);
				putchar(o);
				if (n == '8' && o == '9')
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
