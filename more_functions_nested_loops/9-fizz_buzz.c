#include <stdio.h>

/**
 * main - C main function
 *
 *
 * Return: int
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) != 0)
			printf("Fizz ");
		else if ((n % 5) == 0 && (n % 3) != 0)
			printf("Buzz ");
		else if ((n % 5) == 0 && (n % 3) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", n);
	}
	putchar(10);
	return (0);
}
