#include "main.h"

/**
 * puts2 - prints every other character of a string (odd)
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int size;
	int i;

	size = 0;
	while (*(str + size) != '\0')
		size++;
	for (i = 0; i <= size && *(str + i) != '\0'; i = i + 2)
		_putchar(str[i]);
	_putchar(10);
}

