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
	long double a;
	long double b;
	long double c;
	
	for (i = 0; i < 98; i++)
	{
		if (z < 7540113804746346429)
		{
			x = y;
			y = z;
			z = x + y;
			a = (long double)x / 100000000;
			b = (long double)y / 100000000;
			c = (long double)z / 100000000;
			printf("%ld", z);
		}
		else
		{
			a = b;
			b = c;
			c = a + b;
			printf("%Lf", c);
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
