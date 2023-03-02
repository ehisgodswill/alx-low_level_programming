#include "main.h"

/**
 * *string_toupper - function
 * @str: string
 * Return: string
*/
char *string_toupper(char *str)
{
	char *temp = str;
	while (*str)
	{
		for (int c = 'a'; c <= 'z'; c++)
		{
			if (str == c)
				str -= 32;
		}
		str++;
	}
	return (temp);
}
