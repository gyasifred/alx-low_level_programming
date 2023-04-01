#include "main.h"

/**
 *string_toupper - convert lowercase letters to uppercase
 *@s: String
 *Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
		else
			s[i] = s[i];
	}
	return (s);
}
