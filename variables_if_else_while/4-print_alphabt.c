#include <stdio.h>

/**
 * main - C primary function
 * Return: 0
 **/
int main(void)
{
	char ch;
	char newline = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar(newline);
	return (0);
}
