#include "main.h"

/**
 * *_strcat - appends an string to another string
 * @dest: original string
 * @src: string to be appended
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + n) != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}
	return (dest);
}
