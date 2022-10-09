#include <stdio.h>

/**
 * main - C primary function
 *
 * Return: 0
 */
int main(void)
{
	int n = 1231952;
	int i;
	int x;
	int f;
	int fp;
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
	printf("%d\n", fp);
	return (0);
}
