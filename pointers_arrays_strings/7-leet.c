#include "main.h"

/**
 * *leet - encodes a string into 1337
i* @a: string
 *
 * Return: char *
 */
char *leet(char *a)
{
	int i ;
	int j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "43071"

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] = letters[j])
				a[i] = numbers[j / 2];
		}

	}
	return (a);
}
