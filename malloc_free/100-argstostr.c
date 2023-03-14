#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: value of the arguments
 *
 * Return: pointer to new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int arg_len;
	int arg_index;
	char *all_args;

	if (ac == 0 || av == NULL)
		return (NULL);

	arg_len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arg_len++;
		}
		arg_len++;
	}
	all_args = (char *)malloc(arg_len * sizeof(char));
	if (all_args == NULL)
	{
		free(all_args);
		return (NULL);
	}

	arg_index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			all_args[arg_index] = av[i][j];
			arg_index++;
		}
		if (av[i][j] == '\0')
		{
			all_args[arg_index] = '\n';
			arg_index++;
		}
	}
	return (all_args);
}
