#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to ve proccessed
 * Return: 0
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		_putchar((d - d * 2) + 48);
		return (d - d * 2);
	}
	else
	{
		_putchar(d + 48);
		return (d);
	}
}
