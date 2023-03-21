#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabets in lowercase
 * Return: return 0
 */
void print_alphabet_x10(void)
{
	int i, j;

	i = 1;
	while (i <= 10)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
				j++;
		}
		i++;
		_putchar(10);
	}
}
