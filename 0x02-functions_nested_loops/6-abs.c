#include "main.h"

/**
 *_abs - Check Description
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolute value of number r
 */

int _abs(int r)
{
	int n = r;

	if (n < 0)
		n *= -1;
	return (n);
}
