#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: number
* @index: index of the bit to be changed to 1
*
* Return: 1 if it worked, -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	i = 1;

	for (; index > 0; index--)
		i = i << 1;

	*n = *n | i;

	return (1);
}
