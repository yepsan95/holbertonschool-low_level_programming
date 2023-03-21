#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog_t variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	name_copy = malloc(sizeof(name));
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	*(name_copy) = *(name);
	new_dog->name = name_copy;
	new_dog->age = age;
	owner_copy = malloc(sizeof(owner));
	if (owner_copy == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	*(owner_copy) = *(owner);
	new_dog->owner = owner_copy;
	return (new_dog);
}
