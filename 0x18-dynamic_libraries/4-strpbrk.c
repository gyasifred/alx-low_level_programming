#include "main.h"

/**
  *_strpbrk -Locates the first occurrence in the string s.
  *@s: string
  *@accept: substring
  *Return: s
  */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{
				return (s + i);
			}
			k++;
		}
		i++;
	}
	return ('\0');
}
