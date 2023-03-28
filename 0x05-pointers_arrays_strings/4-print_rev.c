#include "main.h"

/**
 *print_rev - print a string, in reverse
 *@s: character integer entered
 *Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar(10);
}
