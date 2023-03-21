#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees variables of type dog_t
 * @d: pointer to dog_t variable
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
