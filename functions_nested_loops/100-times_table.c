#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: number
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, x, m, d1, d2, d3;

		for (m = 0; m <= n; m++)
		{
			for (i = 0; i <= n; i++)
			{
				x = m * i;
				if (x > 99)
					d3 = x / 100;
				else
					d3 = -16;
				if (x > 9)
					d2 = (x / 10) % 10;
				else
					d2 = -16;
				d1 = x % 10;
				if (i != 0)
				{
					_putchar(d3 + 48);
					_putchar(d2 + 48);
				}
				_putchar(d1 + 48);
				if (i != n)
				{
				_putchar(',');
				_putchar(32);
				}
			}
			_putchar(10);
		}
	}
}
