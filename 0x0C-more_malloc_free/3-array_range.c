#include "main.h"
#include <stdlib.h>

/**
  *array_range - function that creates an array of integers.
  *@min: minimum number
  *@max: maximum number
  *Return: ptr (range from min to max)
  */
int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min;
	ptr = malloc(sizeof(int) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
