#include "main.h"
#include <stdlib.h>

/**
*alloc_grid -2d array of integers to malloc allocated memory
*@width: size
*@height: array size
*Return: NULL if size is 0 or pointer to the array
*/
int **alloc_grid(int width, int height)
{
	int h;/* height increment */
	int w;/* width increment */
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(width * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (w = 0; w < width; w++)
	{
		arr[w] = malloc(height * sizeof(int));
		if (arr[w] == NULL)
		{
			for (; w >= 0; w--)
				free(arr[w]);
			free(arr);
			return (NULL);
		}

		for (w = 0; w  < width; w++)
		{
		for (h = 0; h < height; h++)
			arr[w][h] = 0;
		}
	}
	return (arr);
}
