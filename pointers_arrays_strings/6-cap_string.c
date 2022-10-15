#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
i* @a : pointer to a string
 *
 * Return: char *
 */
char *cap_string(char *a)
{
	int i;
	int j;
	char sep[] = " \t\n,;.!?\"(){}"

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (a[i] == sep[j])
				a[i + 1] = a[i + 1] - 32;
		}
	}
	return (a);
}
