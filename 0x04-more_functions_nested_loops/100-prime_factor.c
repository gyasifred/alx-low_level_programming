#include <stdio.h>

/**
 *main - print the largest prime number
 *
 *Return: int
 */
int main(void)
{
	int count;
	long int num = 612852475143;
	long int max;

	for (count = 2; num > 1; count++)
	{
		max = 0;
		while (num % count == 0)
		{
			max = count;
			num = num / count;
		}
	}
	printf("%lu\n", max);
	return (0);
}
