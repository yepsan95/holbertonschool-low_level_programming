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

	for (size = 0; *str != '\0'; size++)
	for (i = 0; i <= size; i = i + 2)
		_putchar(*(str[i]));
}

