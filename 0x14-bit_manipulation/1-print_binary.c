#include "main.h"

/**
 * print_binary - function to prints the binary representation of a number
 * @n: num of printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int flag, i;
	unsigned long int j;

	flag = 0;
	for (i = 63; i >= 0; i--)
	{
		j = (n >> i) & 1;
		if (j == 1)
			flag = 1;
		if (flag == 1)
			_putchar(((n >> i) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');
}
