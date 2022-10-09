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

	for (x = size; x > 0; x--)
	{
		for (y = size; y > 0; y--)
			_putchar('#');
		_putchar(10);
	}
}
