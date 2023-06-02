#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - creates 2 dimentional array of int
 * @width: width of matrix
 * @height: height of matrix
 * Return: pointer to the created matrix (success) or NULL (error)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, a;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (a = 0; a <= i; a++)
				free(array[a]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (a = 0; a < width; a++)
		{
			array[i][a] = 0;
		}
	}
	return (array);
}
