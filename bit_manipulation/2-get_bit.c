#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number
* @index: index whose value should be returned
*
* Return: value of the bit at the given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int len;

	len = sizeof(unsigned long int) * 8;

	if (index >= len)
		return (-1);

	for (; index > 0; index--)
		n = n >> 1;

	return (n & 1);
}
