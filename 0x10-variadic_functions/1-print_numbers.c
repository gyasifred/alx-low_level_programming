#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_numbers - Print numbers followed by separator
  *@separator: sperarator
  *@n: number of numbers passed
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
