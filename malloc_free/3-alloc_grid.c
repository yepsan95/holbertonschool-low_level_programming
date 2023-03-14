#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the table
 * @height: height of the table
 *
 * Return: pointer to 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **rtn;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	rtn = (int **)malloc(height * sizeof(int *));
	if (rtn == NULL)
	{
		free(rtn);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		rtn[i] = (int *)malloc(width * sizeof(int));
		if (rtn[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(rtn[j]);
			free(rtn);
			return (NULL);
		}
	}
	return (rtn);
}
