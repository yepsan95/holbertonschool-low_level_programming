#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int aux;

	for (i = 0; i < n; i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}
}
