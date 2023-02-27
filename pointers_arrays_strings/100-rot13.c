#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @a: pointer to a string
 *
 * Return: char *
 */
char *rot13(char *a)
{
	char set1[27] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char set2[27] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";
	int i;
	int j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 25; j++)
		{
			if (a[i] == set1[j] && a[i] != '\0')
				a[i] = set2[j];
			else if (a[i] == set2[j] && a[i] != '\0')
				a[i] = set1[j];
		}
	}
	return (a);
}
