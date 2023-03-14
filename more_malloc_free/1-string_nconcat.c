#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: 1° string
 * @s2: 2° string
 * @n: the number of bytes of s2 to be used
 *
 * Return: pointer to a new string, containing s1 and the first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	unsigned int s1_len, s2_len;
	char *rtn;

	s1_len = 0;
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;
	if (n < (s2_len + 1))
		s2_len = n - 1;
	rtn = (char *)malloc((s1_len + s2_len + 1) * sizeof(char))
	if (rtn == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		rtn[i] = s1[i];
	for (j = 0; j < n; i++)
	{
		rtn[i] = s2[j];
		j++;
	}
	rtn[i] = '\0';
	return (rtn);
}
