#include "main.h"

/**
 * print_line - Prints a straight line of n length
 *
 * Return: int
 */
void print_line(int n)
{
	for (n = n; n > 0 ; n--)
		_putchar('_');
	if (n == 0)
		_putchar(10);
}
