#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked-a function that allocates memory using malloc.
 * @b: integer
 * Return:a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause 
 * normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int UINT_MAX)
{
	void *p = malloc(UINT_MAX);

	if (p == NULL)
		exit(98);
	return (p);
}
