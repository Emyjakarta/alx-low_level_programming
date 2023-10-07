#include "main.h"
#include <stdlib.h>
/**
 * _realloc-function that reallocates a memory
 * block using malloc and free
 * @ptr: is a pointer to the memory previously
 * allocated with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum
 * of the old and new sizes
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense
 * Return:void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p1;
	char *p_old_char, *p_new_char;
	size_t Q;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p1 = malloc(new_size);
	if (p1 == NULL)
		return (NULL);
	p_old_char = ptr;
	p_new_char = p1;
	Q = 0;
	while (old_size > Q && new_size > Q)
	{
		p_new_char[Q] = p_old_char[Q];
		Q++;
	}
	free(ptr);
	return (p1);
}
