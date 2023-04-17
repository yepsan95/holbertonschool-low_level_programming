#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: string containing binary number
*
* Return: the number converted, or 0 if:
*         - there is one or more chars in the string b
*           that are not 0 or 1
*         - b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int i;

	i = 0;
	while (b[i] != '1')
		i++;

	number = 0;
	while (b[i] != '\0')
		number = (b[i] & 1) << 1;

	return (number);
}
