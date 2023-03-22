#include <stdio.h>
/**
  *main - print the first 9 fibonacci sequencs
  *
  *Return: Always 0
  */
int main(void)
{
	int counter = 1;
	float num1, num2, sum;

	num1 = 0;
	num2 = 1;
	sum = 0;

	while (counter < 98)
	{
		sum = num1 + num2;
		printf("%0.f, ", sum);
		num1 = num2;
		num2 = sum;
		counter++;
	}
	sum = num1 + num2;
	printf("%.0f\n", sum);
	return (0);
}
