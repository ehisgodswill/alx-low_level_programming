#include "main.h"
/**
 * main - entry point
 * Description: prints character
 * Return: 0 an integer
*/

int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

