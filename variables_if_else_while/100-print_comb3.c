#include <stdio.h>

/**
 *  main - C primary function
 *  Return: 0
 */
int main(void)
{
	int ch1;
	int ch2;
	int newline = 10;

	ch1 = 48;
	while (ch1 <= 57)
	{
		ch2 = 48;
		while (ch2 <= 57)
		{
			if (ch1 < ch2)
			{	putchar(ch1);
				putchar(ch2);
				if (!(ch1 == 56 && ch2 == 57))
				{
					putchar(',');
					putchar(32);
					ch2++;
				}
				else
					ch2++;
			}
			else
			{
				ch2++;
				continue;
			}
		}
		ch1++;
	}
	putchar(newline);
	return (0);
}
