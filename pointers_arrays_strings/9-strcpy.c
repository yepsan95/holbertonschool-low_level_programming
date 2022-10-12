#include "main.h"

/**
 * *_strcpy - copies a string from a pointer to a buffer
 * @dest: buffer
 * @src:  string
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int size;
	int i;

	size = 0;
	while (*(src + size) != '\0')
		size++;
	for (i = 0; i < size; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}

