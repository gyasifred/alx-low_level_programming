#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *change - Determined the number of change required for a cent
 *@amount: Amout to determined it cange
 *Return: sum of the change
 */
int change(int amount)
{
	int cent_25 = 0;
	int cent_10 = 0;
	int cent_5 = 0;
	int cent_2 = 0;
	int cent_1 = 0;
	int num_change = 0;

	while (amount > 0)
	{
		if (amount >= 25)
		{
			amount -= 25;
			cent_25 += 1;
		}
		else if (amount >= 10)
		{
			amount -= 10;
			cent_10 += 1;
		}
		else if (amount >= 5)
		{
			amount -= 5;
			cent_5 += 1;
		}
		else if (amount >= 2)
		{
			amount -= 2;
			cent_2 += 1;
		}
		else
		{
			amount -= 1;
			cent_1 += 1;
		}
	}
	num_change = cent_25 + cent_10 + cent_5 + cent_2 + cent_1;
	return (num_change);
}

/**
 *main - prints minimum number of coins to make change for an amount of money
 *@argc: Number of arguments = 2
 *@argv: Argument
 *Return: integer
 */
int main(int argc, char **argv)
{
	int min_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		min_coins = change(atoi(argv[1]));
		printf("%d\n", min_coins);
	}
	return (0);
}

