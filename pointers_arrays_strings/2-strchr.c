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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] != '\0')
		return (s + i);
	else
		return (NULL);
}
