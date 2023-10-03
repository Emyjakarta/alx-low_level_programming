#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array-a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: character
 * Return:NULL if size = 0, Returns a pointer to
 * the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int Q = 0;
	char **array;

	if (size == 0)
	{
		return (NULL);
	}
	*array = malloc(sizeof(char *) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	while (size > Q)
	{
		array[Q] = c;
		Q++;
	}
	return (array);
}
