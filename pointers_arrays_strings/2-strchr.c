#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
i* @s: pointer to string
 * @c: character
 *
 * Return: char *
 */
char *_strchr(char *s, char c)
{
	int i;
	int size = 0;
	int p;

	for (i = 0; s[i] != '\0'; i++)
		size++;
	for (i = 0; i <= size; i++)
	{
		if (s[i] == c)
		{
			p = (s + i);
			break;
		}
		else
			p = NULL;
	}
	return (p);
}
