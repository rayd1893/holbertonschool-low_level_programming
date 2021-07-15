#include <stdlib.h>

/**
 * alloc_grid - Create array bidimensional
 * @width: Width
 * @height: Heigth
 * Return: Matriz
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height  * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(grid + i) + j) = 0;
		}
	}

	return (grid);
}
