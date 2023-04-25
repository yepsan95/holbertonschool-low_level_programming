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
	unsigned long int n_copy, len, i;

	len = 0;
	n_copy = n;

	for (n_copy = n; n_copy > 0; n_copy = n_copy >> 1)
		len++;
	if (index >= len)
		return (-1);

	for (i = 0; i < (len - index - 1); i++)
		n = n >> 1;

	return (n & 1);
}
