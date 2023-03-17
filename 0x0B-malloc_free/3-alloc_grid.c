#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return array to two dimensional array
 * @width: array width
 * @height: array height
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **are;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	are = malloc(sizeof(int *) * height);
	if (are == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		are[x] = malloc(sizeof(int) * width);
		if (are[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(are[x]);
			}
			free(are);

			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			are[x][y] = 0;
		}
	}
	return (are);
}
