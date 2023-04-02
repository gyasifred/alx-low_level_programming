#include "main.h"

/**
 *leet - Encode strings to numbers
 *@s: string
 *Return: s
 */
char *leet(char *s)
{
	int i, j;
	char s_1[] = "aAeEoOtTlL";
	char s_2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s_1[j] == s[i])
			{
				s[i] = s_2[j];
			}
		}
	}
	return (s);
}
