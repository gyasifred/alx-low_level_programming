#include "main.h"

/**
 *print_square - print # square
 *@size: integer
 *Return: Always 0
 */
void print_square(int size)
{
	int i, j;

	i = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar(35);
			j++;
		}
		_putchar(10);
		i++;
	}
	_putchar(10);
}
