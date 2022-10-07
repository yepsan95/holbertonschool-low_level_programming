#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to ve proccessed
 * Return: 0
 */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
		d = (n - n * 2) % 10;

		_putchar(d);
	else
		_putchar(d);
	return (0);
}
