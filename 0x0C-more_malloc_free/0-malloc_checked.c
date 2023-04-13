#include "main.h"
#include <stdlib.h>

/**
  *malloc_checked - function to allocate memeory with malloc
  *@b: size of memory to allocate
  *Return: pointer to the memory
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	return (ptr);
}
