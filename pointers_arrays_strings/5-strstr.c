#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
i* @haystack: pointer to main string
 * @needle: pointer to substring
 *
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int subsize = 0;
	int coincidences = 0;
	char *p = 0;

	for (i = 0; needle[i] != '\0'; i++)
		subsize++;
	for (i = 0; haystack[i] != '\0'; i++)
	{

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j])
				coincidences++;
			else
				break;
		}
		if (coincidences == (subsize - 1))
		{
			p = (haystack + i);
			break;
		}
	}
	if (p != 0)
		return (p);
	else
		return (NULL);
}
