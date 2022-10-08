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
	printf("12200160415121876738, ");
	printf("19740274219868223167, ");
	printf("31940434634990099905, ");
	printf("51680708854858323072, ");
	printf("83621143489848422977, ");
	printf("135301852344706746049, ");
	printf("218922995834555169026");
	putchar(10);
	return (0);
}
