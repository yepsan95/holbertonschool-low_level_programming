#include <stdio.h>

/**
 * main - C main function
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int a, b, sum, a_1, a_2, b_1, b_2, sum_1, sum_2;

	a = 0;
	b = 1;
	sum = a + b;

	for (i = 1; i <= 91; i++)
	{
		printf("%ld", sum);
		if (i <= 90)
			printf(", ");
		a = b;
		b = sum;
		sum = a + b;
	}
	a_1 = a / 10000000000;
	a_2 = a % 10000000000;
	b_1 = b / 10000000000;
	b_2 = b % 10000000000;
	sum_1 = a_1 + b_1;
	sum_2 = a_2 + b_2;

	for (i = 92; i <= 98; i++)
	{
		printf(", %ld%ld", sum_1, sum_2);
		a_1 = b_1;
		a_2 = b_2;
		b_1 = sum_1;
		b_2 = sum_2;
		sum_1 = a_1 + b_1;
		sum_2 = a_2 + b_2;
		if (sum_2 > 9999999999)
		{
			sum_1 = sum_1 + (sum_2 / 10000000000);
			sum_2 = sum_2 % 10000000000;
		}
	}
	printf("\n");
	return (0);
}
