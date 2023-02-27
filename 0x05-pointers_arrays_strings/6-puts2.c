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
		if(i % 2 != 0)
			continue;
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
