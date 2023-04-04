#include "main.h"
#include <stdio.h>

/**
  *print_diagsums - print the diagonal sum of matrix
  *@a: matrix
  *@size: int
  *Return: void
  */
void print_diagsums(int *a, int size)
{
	int sum_1, sum_2, i;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[i];
		sum_2 += a[size - i - 1];
		a += size;
	}
	printf("%d ", sum_1);
	printf("%d\n", sum_2);
}
