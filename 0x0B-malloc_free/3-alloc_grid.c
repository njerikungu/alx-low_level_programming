#include "main.h"

/**
 *alloc_grid - returns pointer to a 2d array of integers
 *@width: width of array
 *@height: height of array
 *Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int *) * width);
		if (array[i] == NULL)
		{
			while (i-- >= 0)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
