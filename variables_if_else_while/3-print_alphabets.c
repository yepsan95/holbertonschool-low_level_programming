#include <stdio.h>

/**
 * main - C primary function
 * Return: 0
 **/
int main(void)
{
	char ch;
	char CH;
	char newline = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar(newline);
	return (0);
}
