#include "main.h"

/**
  *print_sign - function to check sign of a number
  *@n: n is an ASCII character
  *Return: int
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
