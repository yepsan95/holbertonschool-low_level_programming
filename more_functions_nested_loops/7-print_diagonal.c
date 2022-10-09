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

	for (x = n; x > 0 ; x--)
	{
		for (y = (n - x); y < n; y++)
			_putchar(32);
		_putchar('\\');
		if (n == 0)
			_putchar(10);
	}
}
