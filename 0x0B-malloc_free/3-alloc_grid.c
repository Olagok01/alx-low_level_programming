#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 *	to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int index_1, index_2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (index_1 = 0; index_1 < height; index_1++)
	{
		grid[index_1] = malloc(sizeof(int) * width);
		if (grid[index_1] == NULL)
		{
			for (index_1 = 0; index_1 < height; index_1++)
			{
				free(grid[index_1]);
			}
			free(grid);
			return (NULL);
		}
		for (index_2 = 0; index_2 < width; index_2++)
		{
			grid[index_1][index_2] = 0;
		}
	}
	return (grid);
}
