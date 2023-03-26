#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct Types {

	char type;
	void (*func)(va_list *);
} types;

void char_f(va_list *p);
void int_f(va_list *p);
void float_f(va_list *p);
void string_f(va_list *p);

#endif
