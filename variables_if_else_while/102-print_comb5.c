#include <stdio.h>

/**
 *  main - C primary function
 *  Return: 0
 */
int main(void)
{
	int ch1a;
	int ch1b;
	int ch2a;
	int ch2b;
	int newline = 10;

	ch1a = 48;
	while (ch1a <= 57)
	{
		ch1b = 48;
		while (ch1b <= 57)
		{
			ch2a = 48;
			while (ch2a <= 57)
			{
				ch2b = 48;
				while (ch2b <= 57)
				{
					if ((ch1a < ch2a) || ((ch1a == ch2a) && (ch1b < ch2b)))
					{
						putchar(ch1a);
						putchar(ch1b);
						putchar(32);
						putchar(ch2a);
						putchar(ch2b);
						if (!(ch1a == 57 && ch1b == 56 && ch2a == 57 && ch2b == 57))
						{
							putchar(',');
							putchar(32);
						}
						ch2b++;
					}
					else
					{
						ch2b++;
						continue;
					}
				}
				ch2a++;
			}
			ch1b++;
		}
		ch1a++;
	}
	putchar(newline);
	return (0);
}
