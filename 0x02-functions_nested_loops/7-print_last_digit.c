#include "main.h"

/**
  *print_last_digit - function to print the las digit of a number
  *@n : parameter of the function
  *Return: int
  */
int print_last_digit(int n)
{

	int  last = n % 10;

	if (n < 0)
		last = last * -1;
	_putchar(last + 48);
	return (last);
}
