#include <stdio.h>
#include "main.h"

/**
 * main- entry point
 *
 * Description: print a string
 *
 * Return: return an integer
*/

int main(void)
{
	char word[8] = "_putchar";\
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0)
}