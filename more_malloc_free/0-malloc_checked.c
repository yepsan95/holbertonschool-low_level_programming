#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the allocated buffer
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *rtn;

	rtn = malloc(b);
	if (rtn == NULL)
		exit (98);
	return (rtn);
}
