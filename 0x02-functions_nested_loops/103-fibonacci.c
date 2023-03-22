#include <stdio.h>

/**
  *main - print the even fibonacci numbers less than 4000000
  *
  *Return: Always 0
  */
int main(void)
{
	long int t_sum, sum, num1, num2;

	num1 = 0;
	num2 = 1;
	sum = 0;
	t_sum = 0;

	while (t_sum < 4000000)
	{
		sum = num1 + num2;
		if (sum % 2 == 0)
		{
			t_sum += sum;
		}
		num1 = num2;
		num2 = sum;
	}
	printf("%li\n", t_sum);
	return (0);
}
