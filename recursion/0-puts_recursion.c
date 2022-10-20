#include "main.h"

/**
 * _puts_recursion - prints a string with recursion
 * @s: pointer to string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	char *s2;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s2 = s + 1;
	_puts_recursion(s2);
}
