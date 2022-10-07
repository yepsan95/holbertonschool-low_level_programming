#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int n;
	int m;
	int d1;
	int d2;

	for (m = 0; m <= 9; m++)
	{
		for (i = 0; i <= 9; i++)
		{
			n = m * i;

			if (n > 9)
			{
				d1 = n / 10;
				d2 = n % 10;
			}
			else
			{
				d1 = -16;
				d2 = n;
			}
			_putchar(d1 + 48);
			_putchar(d2 + 48);
			if (i == 9)
			{
				_putchar(10);
			}
			else
			{
				_putchar(',');
				_putchar(32);
			}
		}
	}
}
