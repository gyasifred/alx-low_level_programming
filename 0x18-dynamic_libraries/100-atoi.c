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
	if (s[0] == '+')
	{
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			sum = sum * 10 + s[i] - '0';
			if (sum * sign > 2147483647 || sum * sign < 0)
			{
				return (0);
			}
		}
		else
		{
			break;
		}
	}
	return (sign * sum);
}
