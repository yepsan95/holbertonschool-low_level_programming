#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_diagsums - prints the sum of the two diagonalss
i* @a: pointer to a square two-dimensional matrix array
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		j = i;
		sum_diag1 = sum_diag1 + a[i][j];
		j = (size - 1 - i);
		sum_diag2 = sum_diag2 + a[i][j];
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
