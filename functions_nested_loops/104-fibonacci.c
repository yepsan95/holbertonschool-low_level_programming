#include <stdio.h>

/**
 * main - C main function
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int x = 0;
	unsigned long int y = 0;
	unsigned long int z = 1;
	unsigned long int d = 0;
	unsigned long int rev = 0;

	for (i = 0; i < 98; i++)
	{
		x = y;
		y = z;
		z = x + y;
		if (z < 4294967295)
			printf("%ld", z);
		else
		{
			for (d = z; d != 0; d /= 10)
				rev = rev * 10 + (d % 10);
			d = rev;
			while (rev != 0)
			{
				putchar((rev % 10) + 48);
				rev /= 10;
			}
		}
		if (i != 97)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
