#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if ((i != 'e') && (i != 'q'))
		{
			putchar(i);
		}

		i++;
	}
	putchar('\n');
	return (0);
}
