#include "main.h"

/**
 * print_number - Prints integer
 * @n: number
 *
 * Return: void
 */
void print_number(int n)
{
	int d = n;
	int y;
	int z;
	int e = 1;
	int count = 0;

	if (n < 0)
		_putchar('-');
	if (n == 0)
		_putchar(48);
	while (d != 0)
	{
		d = d / 10;
		count++;
	}
	for (y = 0; y < (count - 1); y++)
		e *= 10;
	for (z = 0; z < count; z++)
	{
		if (n < 0)
			_putchar(((n * -1) / e) + 48);
		else
			_putchar((n / e) + 48);
		n = n % e;
		e = e / 10;
	}
}
