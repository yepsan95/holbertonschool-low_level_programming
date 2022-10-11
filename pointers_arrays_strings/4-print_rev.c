#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = *s;

	while (i != 0)
	{
		i = *s++;
	}
	if (i != *s)
	{
		while (i != *s)
		{
			i = *s-- ;
			_putchar(i);
		}
	}
	_putchar(10);
}

