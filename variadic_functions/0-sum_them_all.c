#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first parameter
 *
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	sum = 0;

	va_start(p, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(p, int);
	va_end(p);
	return (sum);
}
