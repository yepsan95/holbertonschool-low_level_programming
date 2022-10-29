#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *puntero;
	int size_s1;
	int size_s2;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	size_s1 = i;
	for (i = 0; s2[i] != '\0'; i++)
	size_s2 = i;

	puntero = (char *)malloc((size_s1 + size_s2) + sizeof(char));
	if (puntero == NULL)
		return (NULL);
	for (i = 0; i <= size_s1; i++)
		*(puntero + i) = s1[i];
	for (i = 0; i <= size_s2; i++)
		*(puntero + size_s1 + i) = s2[i];
	return (puntero);
}
