#include "main.h"

/**
 *swap_int - swap the values of pointers
 *@a: first integer
 *@b: second integer
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

