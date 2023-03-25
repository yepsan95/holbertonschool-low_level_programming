#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(p, char *) != NULL)
			printf("%s", va_arg(p, char *));
		else
			printf("(nil)");
		if ((i + 1) != n && separator != NULL)
			printf("%s", separator);
	}
	putchar(10);
	va_end(p);
}
