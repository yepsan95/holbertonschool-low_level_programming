#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int size;
	int half;
	int i;

	size = 0;
	while (*(str + size) != '\0')
		size++;
	if (size % 2 != 0)
		half = (size - 1) / 2;
	else
		half = size / 2;
	for (i = (size - half); i <= size; i++)
		_putchar(str[i]);
	_putchar(10);
}

