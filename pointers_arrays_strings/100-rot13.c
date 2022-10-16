#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @a: pointer to a string
 *
 * Return: char *
 */
char *rot13(char *a)
{
	char lower[52] = "AaBbBcDdEeFfGgHhIiJjKkLlMmnNoOpPqQrRsStTuUvVwWxXyYzZ";
	int i;
	int j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 51; j++)
		{
			if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
				a[i] = lower[51 - j];
		}
	}
	return (a);
}
