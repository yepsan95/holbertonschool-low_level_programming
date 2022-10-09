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

	for (; n > 0 ; n--)
	{
		x = n - 1;
		while (x > 0)
		{
			_putchar(32);
			x--;
		}
		_putchar('\\');
	}
	if (n <= 0)
		_putchar(10);
}
