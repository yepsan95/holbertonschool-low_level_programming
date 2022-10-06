#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times in lower case
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		print_alphabet();
}
