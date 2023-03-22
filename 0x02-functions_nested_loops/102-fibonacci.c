#include <stdio.h>

/**
  *main - Fprint the first 50 fibonacci sequence
  *
  *Return: Always (0)
  */
int main(void)
{
	int counter;
	long int sum, num1, num2;

	num1 = 0;
	num2 = 1;
	counter = 1;

	while (counter <= 50)
	{
		sum = num1 + num2;
		printf("%li, ", sum);
		num1 = num2;
		num2 = sum;
		counter++;
	}
	sum = num1 + num2;
	printf("%li\n", sum);
	return (0);
}
