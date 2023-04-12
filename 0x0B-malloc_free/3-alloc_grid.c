#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *alloc_grid - returns a pointer to a 2 dimensional array of integers
  *@width: column of array
  *@height: rows of array
  *Return: pointer to 2D array
  */
int **alloc_grid(int width, int height)
{
	int **arr, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
