#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog-a function that initialize a variable of type struct dog
 * @d: variable of type struct dog
 * @name: variable of type char *
 * @age: variable of type float
 * @owner: variable of type char *
 * Return:void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		return;
	}
	strcpy(d->name, name);
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		return;
	}
	strcpy(d->owner, owner);
	d->age = age;
}
