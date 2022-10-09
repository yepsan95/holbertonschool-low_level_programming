#include <stdio.h>

/**
 * main - C primary function
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	long int m = n;
	long int i = 2;
	long int x;
	long int p;
	long int fp;

	while (i < m)
	{
		p = 0;
		for (x = 1; x < i; x++)
		{
			if ((i % x) == 0)
				p++;
		}
		if (p == 1 && (n % i) == 0)
		{
			fp = i;
			n = n / i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
