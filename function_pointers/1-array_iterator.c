#include <stdio.h>
#include "function_pointers.h"

/**
 * array_interator - executes a function given as a parameter
 * 			on each element of an array
 * @array: given array
 * @size: size of the array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
