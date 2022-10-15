#include "main.h"

/**
 * _memcpy - copies memory area
i* @dest: pointer to destinated memory area
 * @src: pointer to source memoery area
 * @n: number of bytes
 *
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
