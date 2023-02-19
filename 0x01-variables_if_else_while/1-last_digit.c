#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: exit point
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int x = n % 10;
	switch(x)
	{
		case x > 5 :
		print("Last digit of %d is %d and is greater than 5\n", n,x);
		break;
		case x == 0 :
		print("Last digit of %d is %d and is greater than 5\n", n,x);
		break;
		case x < 6 && x != 0 :
		print("Last digit of %d is %d and is greater than 5\n", n,x);
		break;
		default:
		break; 

	}
	return (0);
}