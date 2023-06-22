#include "main.h"

/**
  *_strspn - Calculate the length of a substring
  *@s: string
  *@accept: substring
  *Return: c
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	int i, j;

	c = 0;
	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (c);
}

