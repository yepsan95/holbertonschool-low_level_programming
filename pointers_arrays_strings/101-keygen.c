#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Generates random valid passwords for the program 101-crackme
 *
 * Return: void
 */
void main(void)
{
	int i;
	int random;
	int sum;

	srand(time(NULL));

	sum = 0;
	while (sum <= 2642)
	{
		random = ((rand() % 80) + 48);
		sum = sum + random;
		putchar(random);
	}
	putchar(2772 - sum);
}
