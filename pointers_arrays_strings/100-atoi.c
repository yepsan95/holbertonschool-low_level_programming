#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int size;
	int i;
	int num;

	size = 0;
	while (*(s + size) != '\0')
		size++;
	i = size;
	while (s[i] <= 48 && s[i] >= 57)
	{
		num = s[i] * pow(10, (size - i));
		i--;
	}
}

