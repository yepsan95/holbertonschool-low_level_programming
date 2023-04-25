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
	if (n == 1)
	{
		_putchar(1 + 48);
		return;
	}

	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + 48);
}
