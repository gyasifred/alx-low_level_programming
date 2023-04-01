#include "main.h"

/**
 *cap_string - Capitalize strings
 *@str: string
 *Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[0] >= 'a') && (str[0] <= 'z'))
		{
			str[0] = str[0] - 32;
		}
		if (str[i] == 32 || str[i] == 46 || str[i] == '\t' ||
		    str[i] == '\n' || str[i] == 44 || str[i] == 59 ||
		    str[i] == '!' || str[i] == '?' || str[i] == '(' ||
		    str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}

