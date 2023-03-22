#include <stdio.h>
/**
  *main - print the first 9 fibonacci sequencs
  *
  *Return: Always 0
  */
int main(void)
{
	int counter;
	float sum, num1, num2;

	num1 = 0;
	num2 = 1;
	counter = 1;

	while (counter < 98)
	{
		sum = num1 + num2;
		printf("%0.f, ", sum);
		num1 = num2;
		num2 = sum;
		counter++;
	}
	sum = num1 + num2;
	printf("%0.f\n", sum);
	return (0);
}
