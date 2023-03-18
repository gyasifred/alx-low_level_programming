#include <stdio.h>

/**
 *main- single digit numbers to base1 10 displayed each on new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
