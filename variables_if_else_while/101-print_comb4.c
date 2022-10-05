#include <stdio.h>

/**
 *  main - C primary function
 *  Return: 0
 */
int main(void)
{
	int ch1;
	int ch2;
	int ch3;
	int newline = 10;

	ch1 = 48;
	while (ch1 <= 57)
	{
		ch2 = 48;
		while (ch2 <= 57)
		{
			ch3 = 48;
			while (ch3 <= 57)
				if (ch1 < ch2 && ch2 < ch3)
				{	putchar(ch1);
					putchar(ch2);
					putchar(ch3);
					if (!(ch1 == 55 && ch2 == 56 && ch3 == 57))
					{
						putchar(',');
						putchar(32);
						ch3++;
					}
					else
						ch3++;
				}
				else
				{
					ch3++;
					continue;
				}
			ch2++;
		}
		ch1++;
	}
	putchar(newline);
	return (0);
}
