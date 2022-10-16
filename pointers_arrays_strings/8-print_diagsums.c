#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
i* @a: pointer to a square two-dimensional matrix array
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int diagsums;

	for (i = 0; i < size; i++)
	{
		sum_diag1 = sum_diag1 + (a[i])[i];
		sum_diag2 = sum_diag2 + (a[i])[size - 1 - i];
	}
	diagsums = sum_diag1 + sum_diag2;
	printf("%d\n", diagsums);
}
