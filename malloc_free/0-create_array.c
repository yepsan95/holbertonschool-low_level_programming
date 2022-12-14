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
	unsigned int i;

	puntero = (char *)malloc(size * sizeof(char));
	if (puntero == NULL || size == 0)
	{
		free(puntero);
		return (NULL);
	}
	for (i = 0; i <= size; i++)
		*(puntero + i) = c;
	return (puntero);
}
