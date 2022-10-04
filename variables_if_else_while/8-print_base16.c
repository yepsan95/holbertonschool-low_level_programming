#include <stdio.h>

/**
 *  main - C primary function
 *  Return: 0
 */
int main(void)
{
	char ch1;
	char ch2;
	char newline = '\n';

	for (ch1 = '0'; ch1 <= '9'; ch1++)
		putchar(ch1);
	for (ch2 = 'a'; ch2 <= 'f'; ch2++)
		putchar(ch2);
	putchar(newline);
	return (0);
}
