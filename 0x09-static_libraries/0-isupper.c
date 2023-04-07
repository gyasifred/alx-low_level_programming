#include "main.h"

/**
 * _isupper - Function to check if a cahracter is uppercase
 *@c: Integer
 *Return: int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
