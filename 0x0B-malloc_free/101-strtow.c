#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *strtow - function that splits a string into words
  *@str; string
  *Return: strings
  */
char **strtow(char *str)
{
	int count, i, j;
	char *str2;
	char **words;
	char *start;
	int len;
	char *word;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	count = 0;
	str2 = str;
	while (*str2 != '\0')
	{
		while (*str2 == ' ')
		{
			str2++;
		}
		if (*str2 != '\0')
		{
			count += 1;
		}
		while (*str2 != ' ' && *str2 != '\0')
		{
			str2++;
		}
	}
	words = (char **) malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	str2 = str;
	i = 0;
	while (*str2 != '\0')
	{
		while (*str2 == ' ')
		{
			str2++;
		}
		if (*str2 == '\0')
		{
			break;
		}
		start = str2;
		while (*str2 != ' ' && *str2 != '\0')
		{
			str2++;
		}
		len = str2 - start;
		word = (char *) malloc((len + 1) * sizeof(char));
		if (word == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(word, start, len);
		word[len] = '\0';
		words[i++] = word;
	}
	words[i] = NULL;
	return (words);
}
