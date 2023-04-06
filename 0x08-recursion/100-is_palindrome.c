#include "main.h"

/**
  *len - Return length of string
  *@s: string
  *Return: int
  */
int len(char *s)
{
	if (*s != '\0')
	{
		return (1 + len((s + 1)));
	}
	else
		return (0);
}

/**
  *compare_character -Function to compare the characters of  the string
  *@s: string
  *@i: beginning index
  *@j: ending index
  *Return: 1 if true or 0
  */
int compare_character(char *s, int i, int j)
{
	if (s[i] != s[j])
	{
		return (0);
	}
	else if (i == j && s[i] == s[j])
	{
		return (1);
	}
	else if (i == j - 1 && s[i] == s[j])
	{
		return (1);
	}
	else
	{
		return (compare_character(s, i + 1, j - 1));
	}
}

/**
  *is_palindrome - Function to check if a string is a palindrome
  *@s: string
  *Return: 1 if it a pallindrome otherwise 0
  */
int is_palindrome(char *s)
{
	int start, end, length;

	length = len(s);
	start = 0;
	end = length - 1;

	if (length == 0 || length == 1)
		return (1);
	else
		return (compare_character(s, start, end));
}
