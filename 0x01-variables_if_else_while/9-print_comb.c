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

	for (n = 0; n < 10; n++)
		putchar(n);
		while(n != 9)
			putchar(',');
			putchar(' ');
	putchar('\n')
	return (0);
}
