#include "main.h"

/**
 *_puts - Print string to standout
 *@str: string
 *Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
