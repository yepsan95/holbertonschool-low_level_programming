#include <stdio.h>

/**
 * main - C main function
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int x = 0;
	long int y = 0;
	long int z = 0;

	for (i = 0; i < 50; i++)
	{
		x = y;
		y = z;
		z = x + y;
		printf("%ld", z);
		if (i != 49)
		{
			putchar(',');
			putchar(32);
		}
		if (z == 0)
			z++;
	}
	putchar(10);
	return (0);
}
