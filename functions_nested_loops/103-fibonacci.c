#include <stdio.h>

/**
 * main - C main function
 *
 * Return: 0
 */
int main(void)
{
	long int x = 0;
	long int y = 0;
	long int z = 1;
	long int sum = 0;

	while (z < 4000000)
	{
		x = y;
		y = z;
		z = x + y;
		if (z % 2 == 0)
			sum = sum + z;
	}
	printf("%ld", sum);
	putchar(10);
	return (0);
}
