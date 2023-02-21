#include<stdio.h>
#include "main.h"

/**
 * main: Entry
 *
 * Return: exit
*/

int main(void)
{
	char j[8] = "_putcharv";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(j[i]);
	_putchar('\n');
	return 0;
}
