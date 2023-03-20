#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the emory previously allocated
 * @old_size: size in bytes, of the allocated space for ptr
 * @new_size: new size in bytes, of the new memory block
 *
 * Return: pointer to allocated memory space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *rtn;
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return(ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (new_ptr);
	new_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = ptr[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = ptr[i];
	}
	free(ptr);
	rtn = new_ptr;
	return (rtn);
}
