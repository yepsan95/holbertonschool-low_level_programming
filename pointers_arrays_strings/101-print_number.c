#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	int i, j, size, digit;

	if (n == 0)
	{
		_putchar(48);
	}
	else if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n > 0)
	{
		size = 0;
		i = n;
		while (i > 0)
		{
			i = i / 10;
			size++;
		}
		for (i = size; i > 0; i--)
		{
			digit = n;
			for (j = i; j > 1; j--)
			{
				digit = digit / 10;
			}
			_putchar((digit % 10) + 48);
		}
	}
}
