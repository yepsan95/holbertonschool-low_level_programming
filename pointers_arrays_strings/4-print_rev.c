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
	int count = 0;

	while (i != 0)
	{
		i = *s++;
		count++;
	}
	if (count != 0)
	{
		while (count >= 1)
		{
			i = *s--;
			_putchar(i);
			count--;
		}
	}
	_putchar(10);
}

