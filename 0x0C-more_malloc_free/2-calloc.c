#include "main.h"
#include <stdlib.h>
/**
 * _calloc-a function that allocates memory for
 * an array, using malloc.
 * The _calloc function allocates memory for an array of
 * nmemb elements of size bytes each and returns a pointer
 * to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * FYI: The standard library provides a different function:
 * calloc. Run man calloc to learn more.
 * @nmemb: elements of array
 * @size: size of bytes
 * Return:void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int overallsize, Q;
	void *p;
	char *ptr2;

	if (nmemb == 0 || size == 0)
		return (NULL);
	overallsize = nmemb * size;
	p = malloc(overallsize);

	if (p == NULL)
		return (NULL);
	ptr2 = p;
	Q = 0;
	while (overallsize > Q)
	{
		ptr2[Q] = 0;
		Q++;
	}
	return (p);
}
