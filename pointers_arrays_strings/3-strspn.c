#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
i* @s: pointer to a string
 * @accept: pointer to a substring
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				length++;
		}
	}
	return (length);
}
