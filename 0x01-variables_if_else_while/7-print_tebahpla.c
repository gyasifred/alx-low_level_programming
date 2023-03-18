#include <stdio.h>

/**
  * main - print alphabet in lowercase in reverse
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);

		alphabet--;
	}

	putchar('\n');
	return (0);
}
