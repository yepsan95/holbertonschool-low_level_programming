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

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
