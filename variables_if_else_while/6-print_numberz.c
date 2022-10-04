#include <stdio.h>

/**
 *  main - C primary function
 *  Return: 0
 */
int main(void)
{
	int ch;
	int newline = 10;

	for (ch = 48; ch <= 57; ch++)
		putchar(ch);
	putchar(newline);
	return (0);
}
