#include <stdio.h>
#include <math.h>

/**
 * main - C primary function
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	long int i;
	long int fp;

	while ((n % 2) == 0)
	{
		fp = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			fp = i;
			n = n / i;
		}
	}
	if (n > 2)
		fp = n;
	printf("%ld\n", fp);
	return (0);
}
