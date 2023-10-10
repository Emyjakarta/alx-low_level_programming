#include "dog.h"
#include <stdlib.h>
/**
 * free_dog-a function that frees dogs.
 * @d: pointer to the elements of type dog_t
 * Return:void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
