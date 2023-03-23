#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
