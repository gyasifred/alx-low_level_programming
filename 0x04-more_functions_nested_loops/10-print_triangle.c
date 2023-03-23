#include "main.h"

/**
 *print_triangle - print triangle of #s
 *@size: integer
 *Return: Always 0
 */
void print_triangle(int size)
{
	int line = 0;
	int spaces, hashes;

	if (size > 0)
	{
		while (line < size)
		{
			for (spaces = size - 1; spaces > line; spaces--)
			{
				_putchar(32);
			}
			for (hashes = 0; hashes < line + 1; hashes++)
			{
				_putchar(35);
			}
			_putchar(10);
			line++;
		}
	}
	else
	{
		_putchar(10);
	}
}
