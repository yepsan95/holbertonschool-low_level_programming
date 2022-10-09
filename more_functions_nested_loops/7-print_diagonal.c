#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of n length
 * @n: number of backslashes to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (x = n; x > 0 ; x--)
		{
			for (y = 0; y < (n - x); y++)
				_putchar(32);
			_putchar('\\');
			_putchar(10);
		}
	}
}
