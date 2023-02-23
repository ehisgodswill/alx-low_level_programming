#include "main.h"

/**
 * _isalpha - check for alphabeth character
 * @c: input character
 * Description: Returns 1 if c is a letter, lowercase or uppercase
 * Return: 0 otherwise
*/

int _isalpha(int c)
{
	int i;

	for (i = 'A'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
