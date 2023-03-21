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

	*(name_copy) = *(name);
	*(owner_copy) = *(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char *));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char *));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	new_dog->owner = owner_copy;
	return (new_dog);
}
