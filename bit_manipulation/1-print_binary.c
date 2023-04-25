#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: number in decimal
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(0 + 48);
		return;
	}

	while (n > 0)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
