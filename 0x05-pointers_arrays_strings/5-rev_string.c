#include "main.h"
#include <string.h>

/**
 *rev_string - Function to reverse string
 *
 *@s: string
 *Return; void
 */
void rev_string(char *s)
{
	int len, i;
	char *start, *end, temp;

	len = strlen(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
