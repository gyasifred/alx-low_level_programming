#include "main.h"
#include <stdlib.h>

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

/**
  *string_nconcat - Concatenate 2 strings
  *@s1: first string
  *@s2: second string
  *@n:integer that will determined if entire of string 2 to be use or not
  *Return: s3 = s1 + s2
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, length3, i, j;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	if (n >= length2)
	{
		length3 = length1 + length2 + 1;
	}
	else
	{
		length3 = length1 + n + 1;
		length2 = n;
	}
	s3 = malloc(length3);
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		s3[i + j] = s2[j];

	}
	s3[i + j] = '\0';
	return (s3);
}
