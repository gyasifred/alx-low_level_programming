#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets string length
 * @string: string
 * Return: length (int)
 */

int _strlen(char *string)
{
	int length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
  *argstostr - function that concatenates all the arguments of your program
  *@ac: unmber of argumments
  *@av: array of arguments
  *Return: concatenated arguments
  */
char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}
	arg = malloc(sizeof(char) * len + 1);
	if (arg == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	arg[k] = '\0';
	return (arg);
}
