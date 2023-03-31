#include "main.h"

/**
 *_strcpy - copy one string to another
 *@dest: Destination string
 *@src: String to be copy
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';
	return (dest);
}


