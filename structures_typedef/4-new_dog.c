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
	int i, name_len, owner_len;

	name_len = 0;
	owner_copy = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		name_len++;
	name_copy = malloc((name_len + 1) * sizeof(char));
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';
	new_dog->name = name_copy;
	new_dog->age = age;
	for (i = 0; owner[i] != '\0'; i++)
		owner_len++;
	owner_copy = malloc(sizeof((owner_len + 1) * sizeof(char)));
	if (owner_copy == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';
	new_dog->owner = owner_copy;
	return (new_dog);
}
