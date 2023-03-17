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
	int word_count, word, i, j, k, m;

	if (str == NULL)
		return (NULL);
	j = 0;
	word_count = word_counter(str);
	str_array = (char **)malloc((word_count + 1) * sizeof(char *));
	if (str_array == NULL)
		return (NULL);
	for (i = 0; i < word_count; i++)
	{
		word = char_count(str, &j, &m);
		str_array[i] = (char *)malloc((word + 1) * sizeof(char));
		if (str_array[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(str_array[k]);
			free(str_array);
			return (NULL);
		}
		for (k = 0; k < word; k++)
			str_array[i][k] = str[m + k];
		str_array[i][k] = '\0';
	}
	str_array[i] = NULL;
	return (str_array);
}
/**
 * char_count - count the characters in one word
 * @str: string
 * @j: iteration counter
 * @m: pointer to the index of the beggining of the word in the string
 *
 * Return: number of characters in the word
 */
int char_count(char *str, int *j, int *m)
{
	int word;

	word = 0;
	for (; str[*(j)] != '\0'; (*(j) = *(j) + 1))
	{
		if (str[*(j)] != ' ')
			word++;
		if (str[*(j)] != ' ' && (*(j) == 0 || str[*(j) - 1] == ' '))
			*(m) = *(j);
		if (str[*(j)] == ' ' && (*(j) == 0 || str[*(j) - 1] == ' '))
			continue;
		if (str[*(j)] == ' ' && str[*(j) - 1] != ' ' && str[*(j) - 1] != '\0')
		{
			*(j) = *(j) + 1;
			break;
		}
	}
	return (word);
}

/**
 * word_counter - counts how many words are there in a string
 * @str: string
 *
 * Return: number of words in the string
 */
int word_counter(char *str)
{
	int i, word_count;

	word_count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ' && i > 0)
			word_count++;
	}
	if (str[i - 1] != ' ')
		word_count++;
	return (word_count);
}
