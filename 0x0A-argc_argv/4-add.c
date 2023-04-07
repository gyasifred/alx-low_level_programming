#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *_isdigit - Check if a character is digit
 *@s: chracter
 *Return: 1 if else 0
 */
int _isdigit(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 48 && *(s + i) < 58)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/**
  *main - Add integers
  *@argc: number of integers
  *@argv: arguments
  *Return: sum of interger else erro
  */
int main(int argc, char **argv)
{
	int i;
	int is_digit;
	int sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			is_digit = _isdigit(argv[i]);
			if (is_digit == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
