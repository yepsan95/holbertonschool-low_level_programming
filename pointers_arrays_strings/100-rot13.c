#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @a: pointer to a string
 *
 * Return: char *
 */
char *rot13(char *a)
{
	char set[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmzZyYxXwWvVuUtTsSrRqQpPoOnN";
	int i;
	int j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (a[i] == set[j] && a[i] != '\0')
			{
				a[i] = *(set + (51 - j));
				break;
			}
		}
	}
	return (a);
}
