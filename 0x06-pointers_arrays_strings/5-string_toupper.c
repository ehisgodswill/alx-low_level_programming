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
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (temp);
}
