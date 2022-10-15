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

	for (i = 0; s[i] != '\0'; i++)
		size++;
	for (i = 0; i <= size; i++)
	{
		if (s[i] == c)
		{
			break;
			return (s + i);
		}
		else
		{
			return (NULL);
		}
	}
}
