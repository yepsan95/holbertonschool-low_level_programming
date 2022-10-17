#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	int i;
	int j;
	int pow;
	int digit;
	int size = 0;

	i = n;
	while (i > 0)
	{
		i = i / 10;
		size++;
	}
	for (i = 0; i < size; i++)
	{
		pow = 1;
		for (j = 0; j < (size - 1 - i); j++)
			pow = pow * 10;
		digit = (n / pow) % 10;
		_putchar(digit + 48);
	}
}
