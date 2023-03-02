#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: pointer to the buffer
 * @size: size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int n;
	int i;

	for (n = 0; n < size; n = n + 10)
	{
		printf("%08x: ", n);
		for (i = n; i < (n + 10); i++)
		{
			if (i < size)
				printf("%02x", b[i]);
			else
				printf("  ");
			if ((i % 2) == 1)
				putchar(32);
		}
		for (i = n; i < (n + 10); i++)
		{
			if (i > size)
				break;
			if (b[i] >= 32 && b[i] <= 126)
				printf("%c", b[i]);
			else
				printf(".");
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
