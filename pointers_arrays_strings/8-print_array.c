#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array name
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int size;
	int i;

	size = 0;
	while (*(a + size) != '\0')
		size++;
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i])
	}
}

