#include <stdio.h>

/**
 *  main - C primary function
 *  Return: 0
 */
int main(void)
{
	char ch;
	char newline = '\n';

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar(newline);
	return (0);
}
