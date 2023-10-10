#include "dog.h"
#include <stdio.h>
/**
 * print_dog-a function that prints a struct dog
 * @d: element of type struct dog
 * Format: see example bellow
 * You are allowed to use the standard library
 * If an element of d is NULL, print (nil) instead of
 * this element. (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 * Return:void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
