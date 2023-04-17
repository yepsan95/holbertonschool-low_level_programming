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

	if (b == NULL)
		return (0);
	for (i = 0; b[i] == '\0'; i++)
	{
		if (b[i] == '1')
			break;
	}
	if (b[i] == '\0')
		return (0);
	number = 1;
	i++;
	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
		{
			number = number << 1;
			number = number | (b[i] - 48);
		}
		else
		{
			return (0);
		}
		i++;
	}

	return (number);
}
