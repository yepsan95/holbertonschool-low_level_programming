#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
i* @a: string
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int mitad = n / 2;
	int temp;
	int i;

	for (i = 0; i < mitad; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
