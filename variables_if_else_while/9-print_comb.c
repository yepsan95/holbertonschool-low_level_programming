#include <stdio.h>

/**
 *  main - C primary function
 *  Return: 0
 */
int main(void)
{
	char ch;
	char newline = '\n';

	for (ch = '0'; ch <= '9'; ch++)
	{	putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar(newline);
	return (0);
}
