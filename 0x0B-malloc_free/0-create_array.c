#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size * sizeof(char));
	int i = 0;

	if (size == 0 || size == NULL)
		return (NULL);
	while (i < size)
		ptr[i++] = c;
	return (ptr)
}
