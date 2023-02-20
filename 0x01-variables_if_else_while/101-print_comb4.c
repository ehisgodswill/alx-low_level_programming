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
	int a, b, c;
	for (a = '0'; a <= '9'; a++)
	{
		if (a != b)
		{
			for (b = a + 1; b <= '9'; b++)
			{
				if (b != c)
				{
					for (c = b + 1; c <= '9'; c++)
					{
						putchar(a);
						putchar(b);
						putchar(c);
						if (a == 7 && b == 8 && c == 9)
							continue;
						else
						{
							putchar(',');
							putchar(' ');
						}

					}
				}
			}
		}
	}
	return (0);
}
