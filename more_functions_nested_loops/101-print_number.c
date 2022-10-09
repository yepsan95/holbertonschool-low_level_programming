#include "main.h"

/**
 * print_number - Prints integer
 * @n: number
 *
 * Return: void
 */
void print_number(int n)
{
	int rem;
	int rev = 0;

	if (n < 0)
		_putchar('-');
	if (n == 0)
		_putchar(48);
	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	while (rev != 0)
	{
		if (rev < 0)
			_putchar(((rev % 10) * -1) + 48);
		else
		_putchar((rev % 10) + 48);
		rev /= 10;
		if (n > 9 && (n % 10) == 0)
			_putchar(48);
	}
}
