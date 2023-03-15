#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: double pointer to an array of strings
 */
char **strtow(char *str)
{
	char **str_array;
	int word_count, word, i, j, k, m = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
			word_count++;
	}
	if (str[i - 1] != ' ')
		word_count++;
	str_array = (char **)malloc(word_count * sizeof(char *));
	if (str_array == NULL)
		return (NULL);
	for (i = 0; i < word_count; i++)
	{
		for (; str[j] != '\0'; j++)
		{
			if (str[j] != ' ')
				word++;
			if (str[j] != ' ' && (j == 0 || str[j - 1] == ' '))
				m = j;
			if (str[j] == ' ' && (j == 0 || str[j - 1] == ' '))
				continue;
			if (str[j] == ' ' && str[j - 1] != ' ')
			{
				j++;
				break;
			}
		}
		str_array[i] = (char *)malloc((word + 1) * sizeof(char));
		if (str_array[i] == NULL)
		{
			for (k = 0; k <= i; k++)
				free(str_array[k]);
			free(str_array);
			return (NULL);
		}
		for (k = 0; k <= word; k++)
			str_array[i][k] = str[m + k];
	}
	return (str_array);
}
