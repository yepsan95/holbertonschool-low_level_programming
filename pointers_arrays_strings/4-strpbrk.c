#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
i* @s: pointer to a string
 * @accept: pointer to substring
 *
 * Return: char *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	char *p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				p = s[i];
				break;
		}
	}
	if (p != 0)
		return (p);
	else
		return (NULL);
}
