#include "main.h"

/**
 * _strcmp - compares two strings
i* @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int size1;
	int size2;
	int r;

	for (i = 0; *(s1 + i) != '\0'; i++)
		size1++;
	for (i = 0; *(s2 + i) != '\0'; i++)
		size2++;
	for (i = 0; *(s1 + i) == *(s2 + i); i++)
	{
		if (i >= size1 || i >= size2)
			break;
	}
	if ((s1[i] > s2[i] || s1[i] < s2[i])
		r = (s1[i] - s2[i]);
	else
		r = 0;
	return (r);
}
