#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times in lower case
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	int m;

	for (m = 0; m <= 9; m++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar(10);
	}
}
