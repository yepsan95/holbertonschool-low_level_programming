#include "main.h"

/**
 * print_to_98 - prints from n to 98
 *@n: n number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int m, d, r, x, rev = 0;

	d = 98 - n;
	if (n > 98)
		d = (98 - n) - (2 * (98 - n));
	for (m = 0; m <= d; m++)
	{
		r = n + m;
		if (n > 98)
			r = n - m;
		if (r != 0)
		{
			for (x = r; x != 0; x /= 10)
				rev = rev * 10 + (x % 10);
			for (x = r; x != 0; x /= 10)
			{
				if (rev < 0)
				{
					if (x == r)
						_putchar(45);
					_putchar((rev % 10) - ((rev % 10) * 2) + 48);
				}
				else
				{
					_putchar((rev % 10) + 48);
				}
				rev /= 10;
			}
		}
		else
		{
			_putchar(48);
		}
		if (r != 98)
		{
			_putchar(',');
			_putchar(32);
		}
	}
	_putchar(10);
}
