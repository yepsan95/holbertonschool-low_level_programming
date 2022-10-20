#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int factorial;

	if(n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));


}
