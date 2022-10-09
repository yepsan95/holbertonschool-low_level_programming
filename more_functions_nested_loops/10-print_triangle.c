#include "main.h"

/**
 * print_triangle - Prints a triangle of size n
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size <= 0)
		_putchar(10);
	for (x = size; x > 0; x--)
	{
		for (y = (size - 1); y > 0; y--)
			_putchar(32);
		for (z = size; z > (size - 1); z--)
			_putchar('#');
		_putchar(10);
	}
}
