#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes with character 'c'
 *
 * @size: size of the array
 * @c: initialization character
 *
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *puntero;

	puntero = malloc(size * sizeof(char));
	if (puntero == NULL)
	{
		free(puntero);
		return (NULL);
	}
	free(puntero);
	puntero[0] = c;
	return (puntero);
}
