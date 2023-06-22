#include "main.h"

/**
 *_strcat - concatenates 2 stings
 *@dest: destination array
 *@src: starting character
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}

