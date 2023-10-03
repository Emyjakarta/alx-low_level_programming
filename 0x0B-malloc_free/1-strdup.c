#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup-a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: string
 * The _strdup() function returns a pointer to a new string which is
 * a duplicate of the string str. Memory for the new string is obtained
 * with malloc, and can be freed with free.
 * Return:NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated
 * string. It returns NULL if insufficient memory was available
 * FYI: The standard library provides a similar function:
 * strdup. Run man strdup to learn more.
 */
char *_strdup(char *str)
{
	size_t length = strlen(str) + 1;
	char *ptr;

	ptr = malloc(length * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}
