#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @a: pointer to a string
 *
 * Return: char *
 */
char *rot13(char *a)
{
	int temp = 0;
	int lower[26] = "abcdefghijklmnopqrstuvwxyz"
	int i;
	int j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (a[i] == lower[j])
				a[i] = lower[25 - j];
		}
	}
	return (a);
}
