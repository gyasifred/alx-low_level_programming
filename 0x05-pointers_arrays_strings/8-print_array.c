#include <stdio.h>

/**
 *print_array - print arrays of numbers
 *@a: array
 *@n: integer
 *Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar(10);
}
