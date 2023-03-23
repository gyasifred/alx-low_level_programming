#include "main.h"

/**
 *_isdigit - check if an input is a digit
 *@c: integer
 *Return: int
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
