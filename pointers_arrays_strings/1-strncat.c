#include "main.h"

/**
 * *_strncat - appends an string to another string
i * @dest: original string
 * @src: string to be appended
 * @n: number of bytes of src to be appended
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + x) != '\0' && x <= n && n != 0)
	{
		dest[i + x] = src[x];
		x++;
	}
	return (dest);
}
