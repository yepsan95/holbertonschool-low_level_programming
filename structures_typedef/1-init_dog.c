#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the variable of type struct dog
 * @name: string that contains the name of the dog
 * @age: float number that contains the age of the dog
 * @owner: string that contains the owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
