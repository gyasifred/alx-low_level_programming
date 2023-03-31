#include "main.h"

/**
 *_atoi - Convert strings to numbers
 *@s: string
 *Return: sign * num
 */
int _atoi(char *s)
{
	int sum = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
		sum = sum * 10 + s[i] - '0';
	return (sign *sum);
}
