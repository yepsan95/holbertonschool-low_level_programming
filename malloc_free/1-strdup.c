#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies a string into a newly allocated space o memory
 *
 * @str: pointer to string
 *
 * Return: pointer to newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *puntero;
	int i;
	int str_size;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	str_size = i;
	puntero = (char *)malloc(str_size * sizeof(char));
	if (puntero == NULL)
		return (NULL);
	for (i = 0; i <= str_size; i++)
		*(puntero + i) = *(str + i);
	return (puntero);
}
