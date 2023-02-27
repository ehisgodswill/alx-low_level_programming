#include "main.h"
/**
 * puts2 - a function that prints a string, followed by a new line, to stdout
 * @str: string to output
 * Return: nothing
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i+=2;
	}
	_putchar('\n');
}
