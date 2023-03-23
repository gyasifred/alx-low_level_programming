#include "main.h"

/**
 *print_diagonal - print diagonal line
 *@n: integer
 *Return: Always 0
 */
void print_diagonal(int n)
{
	int line = 0;
	int spaces;

	if (n > 0)
	{
		while (line < n)
		{
			for (spaces = 0; spaces < line; spaces++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
			line++;
		}
	}
	else
	{
		_putchar(10);
	}
}
