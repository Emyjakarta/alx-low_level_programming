#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog-a function that creates a new dog
 * @name: variable of type char *
 * @age: variable of type float
 * @owner: variable of type char *
 * Return:NewDog
 * You have to store a copy of name and owner
 * Return NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NewDog;

	if (name == NULL || owner == NULL)
		return (NULL);

	NewDog = malloc(sizeof(dog_t));
	if (NewDog == NULL)
		return (NULL);
	NewDog->name = malloc(strlen(name) + 1);
	NewDog->owner = malloc(strlen(owner) + 1);
	if (NewDog->name == NULL || NewDog->owner == NULL)
	{
		free(NewDog->name);
		free(NewDog->owner);
		free(NewDog);
		return (NULL);
	}
	strcpy(NewDog->name, name);
	strcpy(NewDog->owner, owner);
	NewDog->age = age;
	return (NewDog);
}
