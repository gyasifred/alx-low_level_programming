#include "function_pointers.h"
#include <stdlib.h>

/**
  *array_iterator- call a function to iterate over array
  *@array: array of integers
  *@size: length of the array
  *@action: pointer function
  *Return:void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
