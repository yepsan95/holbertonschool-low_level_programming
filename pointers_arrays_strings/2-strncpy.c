#include "main.h"

/**
 * *_strncpy - copies a string into another
i* @dest: destiny string
 * @src: source string
 * @n: number of bytes of src to be copied
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int size = 0;

	for (i = 0; *(src + i) != '\0'; i++)
		size++;
	for (i = 0; i < n && i < size; i++)
		*(dest + i) = *(src + i);
	if (size < (n + 1))
		for (; i < n; i++)
			*(dest + i) = '\0';
	return (dest);
}
