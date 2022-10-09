#include <stdio.h>

/**
 * main - C primary function
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	long int i;
	long int x;
	long int f;
	long int fp;
	int fc;

	for (i = 1; i <= n; i++)
	{
		if ((n % (n / i)) == 0)
			f = i;
		fc = 0;
		for (x = 2; x <= f; x++)
		{
			if ((f % x) == 0)
				fc++;
			if (fc == 0)
				fp = f;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
