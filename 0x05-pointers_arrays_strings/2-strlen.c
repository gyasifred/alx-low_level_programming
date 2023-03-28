#include "main.h"

/**
 *_strlen - Get the length of a string
 *@s: string
 *Return: len
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}


