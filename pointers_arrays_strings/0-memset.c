#include "main.h"

/**
 * _memset - fills memory with a constant byte
i* @s: pointer to memory
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: char *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
