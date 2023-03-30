#include "main.h"
#include <string.h>

/**
 *puts2 - print selective numbers
 *@str: string
 *Retun: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
