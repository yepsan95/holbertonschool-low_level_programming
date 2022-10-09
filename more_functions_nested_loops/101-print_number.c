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
	int x;
	int y;
	int z;
	int e = 1;
	int count;

	if (n < 0)
		_putchar('-');
	if (n == 0)
		_putchar(48);
	while (d != 0)
	{
		d = d / 10;
		count++;
	}
	for (x = 0; x <= count; x++)
	{
		for (y = 0; y < (count - 1); y++)
			e *= 10;
		for (z = 0; z < count; z++)
		{
			_putchar((n / e) + 48);
			e /= 10;
		}
	}
}
