#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, k, j, z;

	i = 48;
	k = 48;
	j = 48;
	z = 48;

	while (i < 58)
	{
		k = 48;
		while (k < 58)
		{
			j = i;
			z = k + 1;
			while (j < 58)
			{
				while (z < 58)
				{
					putchar(i);
					putchar(k);
					putchar(32);
					putchar(j);
					putchar(z);
					if (i < 57 || k < 56 || j < 57 || z < 57)
					{
						putchar(44);
						putchar(32);
					}
					z++;
				}
				z = 48;
				j++;
			}
			k++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
