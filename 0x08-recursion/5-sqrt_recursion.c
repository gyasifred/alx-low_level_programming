#include "main.h"

/**
 *find_sqrt - Find integer as candidate of square roo
 *@x: squre integer
 *@y: integer
 *Return:1 if
 */
int find_sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y > x / y)
	{
		return (find_sqrt(x, y - 1));
	}
	else if (y < x / y)
	{
		return (find_sqrt(x, y + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: integer - square root, if none returns -1
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 1;
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (find_sqrt(n, i));
}
