#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @a: pointer to a string
 *
 * Return: char *
 */
char *rot13(char *a)
{
	char lower[52] = "AaBbCcDdEeFfGgHhIiJjKkLlMmnNoOpPqQrRsStTuUvVwWxXyYzZ";
	int i;
	int j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == lower[j])
				a[i] = lower[51 - j];
		}
	}
	return (a);
}
