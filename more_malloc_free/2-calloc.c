#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *rtn;

	if (size == 0 || nmemb == 0)
		return (NULL);
	rtn = (char *)malloc(nmemb * size);
	if (rtn == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		rtn[i] = 0;
	}
	return ((void *)rtn);
}
