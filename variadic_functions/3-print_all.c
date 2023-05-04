#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char delimitador[3] = "";
	va_list p;
	unsigned int j, k;
	types type[] = {
		{'c', char_f},
		{'i', int_f},
		{'f', float_f},
		{'s', string_f},
		{'\0', NULL}
		};

	va_start(p, format);

	j = 0;
	while (format[j])
	{
		k = 0;
		while (type[k].type != '\0')
		{
			if (format[j] == type[k].type)
			{
				printf("%s", delimitador);
				(*type[k].func)(&p);
				delimitador[0] = ',';
				delimitador[1] = ' ';
				delimitador[2] = '\0';
				break;
			}
			k++;
		}
		j++;
	}
	putchar(10);
	va_end(p);
}

/**
 * char_f - prints a char parameter
 * @p: pointer to a va_list variable
 *
 * Return: void
 */
void char_f(va_list *p)
{
	printf("%c", va_arg(*(p), int));
}

/**
 * int_f - prints an int parameter
 * @p: pointer to a va_list variable
 *
 * Return: void
 */
void int_f(va_list *p)
{
	printf("%d", va_arg(*(p), int));
}

/**
 * float_f - prints a float parameter
 * @p: pointer to a va_list variable
 *
 * Return: void
 */
void float_f(va_list *p)
{
	printf("%f", va_arg(*(p), double));
}

/**
 * string_f - prints a string parameter
 * @p: pointer to a va_list variable
 *
 * Return: void
 */
void string_f(va_list *p)
{
	printf("%s", va_arg(*(p), char *));
}
