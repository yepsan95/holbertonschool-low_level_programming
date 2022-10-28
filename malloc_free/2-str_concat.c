#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int s1_size;
	int s2_size;
	char *rtn;

	for (i = 0; s1[i] != '\0'; i++)
	s1_size = i;
	for (i = 0; s2[i] != '\0'; i++)
	s2_size = i;
	rtn = malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (rtn = NULL)
	{
		free(rtn);
		return (NULL);
	}
	for (i = 0; i < s1_size; i++)
		*(rtn + i) = s1[i];
	for (i = 0; i <= s2_size; i++)
		*(rtn + s1_size + i) = s2[i];
	free(rtn);
	return (rtn);
}
