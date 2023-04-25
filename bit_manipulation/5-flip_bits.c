#include "main.h"

/**
* clear_bit - returns the number of bits you would need to flip
*             in order to get from one number to another
* @n: original number
* @m: resultant number
*
* Return: the number of bits flipped to get from n to m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	int count;

	count = 0;
	
	for (flip = n ^ m; flip > 0 ; flip = flip << 1)
	{
		if ((flip & 1) == 1)
			count++;
	}

	return (count);
}
