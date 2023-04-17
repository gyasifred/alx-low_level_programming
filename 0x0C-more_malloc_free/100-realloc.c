#include "main.h"
#include <stdlib.h>
/**
  *_realloc -  function that reallocates a memory block using malloc and free
  *@ptr:pointer to the memory previously allocated with a call to malloc
  *@old_size:is the size, in bytes, of the allocated space for ptr
  *@new_size:is the new size, in bytes of the new memory block
  *Return: pointer allocate new size memory, or NULL
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_p;
	int i, k = new_size;
	char *old_ptr = ptr;

	if (ptr == NULL)
	{
		n_p = malloc(new_size);
		return (n_p);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	n_p = malloc(new_size);
	if (n_p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		k = old_size;
	}
	for (i = 0; i < k; i++)
	{
		n_p[i] = old_ptr[i];
	}
	free(ptr);
	return (n_p);
}
