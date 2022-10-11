#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 *
 * Return: length of the string
 */
void _puts(char *str)
{
	int i = *str;

	while (i != 0)
	{
		_putchar(i);
		i = *str++;
	}
}

