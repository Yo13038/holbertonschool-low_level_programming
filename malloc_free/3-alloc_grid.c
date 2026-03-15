#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * alloc_grid - creates a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: grid to 2D array, or NULL (failure)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
	}
	return (grid);
	free(grid);
}
