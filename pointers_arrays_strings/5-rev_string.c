#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string (char *s)
{

	int len;
	int mitad;
	char temp;
	int i;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	mitad = len / 2;
	for (i = 0; i < mitad; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len -1 -i] = temp;
	}
}

