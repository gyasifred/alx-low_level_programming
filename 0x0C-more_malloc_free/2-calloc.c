#include "main.h"
#include <stdlib.h>

/**
  *_calloc - allocates memory for an array, using malloc.
  *@nmemb: number of arrays
  *@size: size of array
  *Return: ptr-Pointer to array
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *a;
	unsigned int i;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	a = arr;
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}
	return (arr);
}
