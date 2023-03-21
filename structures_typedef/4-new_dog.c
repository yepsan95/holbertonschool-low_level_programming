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
	dog_t *dog;
	char *name_copy;
	char *owner_copy;
	int i, name_len, owner_len;

	name_len = 0;
	owner_copy = 0;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		name_len++;
	name_copy = (char *)malloc((name_len + 1) * sizeof(char));
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';
	dog->name = name_copy;
	dog->age = age;
	for (i = 0; owner[i] != '\0'; i++)
		owner_len++;
	owner_copy = (char *)malloc(sizeof((owner_len + 1) * sizeof(char)));
	if (owner_copy == NULL)
	{
		free(dog);
		free(name_copy);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';
	dog->owner = owner_copy;
	return (dog);
}
