#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *str_concat - concatenates two strings
  *@s1: string 1
  *@s2: string 2
  *Return: s1 + s2
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, len3;
	unsigned int i;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	len3 = len1 + len2 + 1;
	arr = (char *) malloc(sizeof(char) * len3);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		arr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		arr[i + len1] = s2[i];
	}
	return (arr);
}
