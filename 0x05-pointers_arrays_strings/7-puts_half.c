#include "main.h"
#include "main.h"
#include <string.h>
/**
 *puts_half - print half of string
 *@str: string
 *Return: void
 */
void puts_half(char *str)
{
	int len, i, mid;

	len = strlen(str) - 1;
	mid = len / 2;
	if (mid % 2 == 0)
	{
		for (i = mid + 1; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	if (mid % 2 != 0)
	{
		for (i = mid + 2; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
