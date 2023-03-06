#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: pointer to string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int contador;

	contador = 0;

	if (*s == '\0')
		return (0);
	contador = _strlen_recursion(s + 1);
	return (contador + 1);
}
