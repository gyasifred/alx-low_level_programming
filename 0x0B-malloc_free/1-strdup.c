#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  *_strdup - returns a pointer to a newly allocated space in memory
  *@str: string
  *Return: dest
  */
char *_strdup(char *str)
{
	char *dest;
	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) - 1;
	dest = (char *) malloc(sizeof(str) * len);
	if (dest == NULL)
	{
		return (NULL);
	}
	strcpy(dest, str);
	return (dest);
}
