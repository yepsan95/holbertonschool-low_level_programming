#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensaional array of integers
 * @width: width of the table
 * @height: height of the table
 *
 * Return: pointer to 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **rtn;
	int i;

	if (width == 0 || width < 0 || height == 0 || height < 0)
		return (NULL);
	rtn = (int **)calloc(height, sizeof(int *));
	if (rtn == NULL)
	{
		free(rtn);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		rtn[i] = (int *)calloc(width, sizeof(int));
	for (i = 0; i < height; i++)
	{
		if (rtn[i] == NULL)
		{
			free(rtn[i]);
			return (NULL);
		}
	}
	return (rtn);
}
