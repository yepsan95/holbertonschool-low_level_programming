#include "main.h"

/**
 * _isdigit - Checks for a digit character
 * @c: character
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
