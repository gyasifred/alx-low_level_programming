#include "main.h"

/**
 *puts_half - print half of string
 *@str: string
 *Return: void
 */
void puts_half(char *str)
{
	int i, j, max_len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max_len = i;
	j = max_len / 2;
	while (j <= max_len)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar(10);
}
