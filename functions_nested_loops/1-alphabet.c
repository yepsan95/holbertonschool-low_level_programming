#include <stdio.h>
#include "main.h"
/**
 * main - C primary function
 * Return: 0
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
		_putchar(n);
	_putchar(10);
}
