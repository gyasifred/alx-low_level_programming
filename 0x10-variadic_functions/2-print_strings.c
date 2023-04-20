#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_strings - function to print strings
  *@separator: separator
  *@n: number of arguments
  *Return: Void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
