#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2D grid
 * @width: width input
 * @height: height input
 *
 * Description:
 * alloc_grid creates a 2D grid with the specified width and height.
 * If width or height is less than or equal to 0, it returns NULL.
 * Memory is allocated for the grid, and each element's initialized to 0.
 *
 * Return: Pointer to the 2D grid, NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		mee[m] = malloc(sizeof(int) * width);

		if (mee[m] == NULL)
		{
			for (; m >= 0; m--)
				free(mee[m]);
			free(mee);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			mee[m][n] = 0;
	}

	return (mee);
}
