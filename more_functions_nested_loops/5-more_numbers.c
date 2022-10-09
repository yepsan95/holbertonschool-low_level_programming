#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, 10 times
 *
 * Return: coid
 */
void more_numbers(void)
{
	int n;
	int m;

	for (n = 0 ; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
				_putchar((m + 48) / 10);
			}
			_putchar((m + 48) % 10);
		}
		_putchar(10);
	}
}
