#include <stdio.h>

/**
 *main - fizz buzz test
 *
 *Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FIZZBUZZ ");
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("BUZZ");
			else
				printf("BUZZ ");
		}
		else if (i % 3 == 0)
			printf("FIZZ ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
