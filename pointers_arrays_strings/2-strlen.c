#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = *s;
	int count = 0;

	while (i != 0)
	{
		i = *s++;
		count++;
	}
	if (count > 0)
		return (count - 1);
	else
		return (count);
}

