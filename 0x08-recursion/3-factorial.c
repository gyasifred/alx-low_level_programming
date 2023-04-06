#include "main.h"

/**
  *factorial - Print the factorial of a number
  *@n: number
  *Return: n!
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
