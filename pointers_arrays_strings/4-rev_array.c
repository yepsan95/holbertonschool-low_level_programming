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
		temp = *(a + (i * 4));
		*(a + (i * 4)) = *(a + ((n * 4) - 4 - (i * 4)));
		*(a + ((n * 4) - 4 - (i * 4))) = temp;
	}
}
