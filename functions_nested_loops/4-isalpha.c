#include "main.h"

/**
 * _isalpha - evaluates if a character is alphabetic
 * @c: character to be evaluated
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);

}
