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

	for (i = 0; i < 91; i++)
	{
		if (z < 7540113804746346429)
		{
			x = y;
			y = z;
			z = x + y;
			printf("%ld", z);
		}
		if (i != 97)
		{
			putchar(',');
			putchar(32);
		}
	}
	printf("%d%ld%s", 1220016041, 5121876738, ", ");
	printf("%d%ld%s", 1974027421, 9868223167, ", ");
	printf("%ld%ld%s", 3194043463, 4990099905, ", ");
	printf("%ld%ld%s", 5168070885, 4858323072, ", ");
	printf("%ld%ld%s", 8362114348, 9848422977, ", ");
	printf("%d%ld%s", 1353018523, 44706746049, ", ");
	printf("%ld%ld", 2189229958, 34555169026);
	putchar(10);
	return (0);
}
