#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: number
* @index: index of the bit to be changed to 1
*
* Return: 1 if it worked, -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	i = 1;

	for (; index > 0; index--)
		i = i << 1;

	*n = (*n | i) ^ i;

	return (1);
}
