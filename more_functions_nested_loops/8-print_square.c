#include "main.h"

/**
 * print_square - Prints a square of side n
 * @size: side of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar(10);
	for (x = size; x > 0; x--)
	{
		for (y = size; y > 0; y--)
			_putchar('#');
		_putchar(10);
	}
}
