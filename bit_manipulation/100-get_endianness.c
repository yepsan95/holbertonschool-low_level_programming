#include "main.h"

/**
* get_endianess  - checks the endianess
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int x;
	char *c = (char *) &x;
	int endianess;

	x = 0x76543210;

	if (*c == 0x10)
		endianess = 1;
	else
		endianess = 0;

	return (endianess);
}
