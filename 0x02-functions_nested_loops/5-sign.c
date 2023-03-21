#include "main.h"

/**
  *print_sign - function to check sign of a number
  *@n: n is an ASCII character
  *Return: int
  */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (0);
	}
	else if (n < 48)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
