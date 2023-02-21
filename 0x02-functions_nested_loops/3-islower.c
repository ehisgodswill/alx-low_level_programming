#include "main.h"

/**
 * _islower - checks if char is lower
 * @c: an input char
 * Description: a function for lower case character
 * Return: an integer, 1 if true, 0 if false
*/

int _islower(int c)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
