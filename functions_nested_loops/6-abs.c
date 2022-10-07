#include "main.h"

/**
 * _abs - outputs the absolute value of a number
 *
 * @n: number to be evaluated
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		return (n - n * 2);
	else if (n == 0)
		return (0);
	else if (n > 0)
		return (n);
	return (0);
}
