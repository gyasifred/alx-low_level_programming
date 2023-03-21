#include <main.h>
#include <string.h>

/**
 * main - prints the word _putchar
 * Return: return 0
 */

int main(void)
{
	char word[10] = "putchar";
	int i = 0;

	while (i <= strlen(word))
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
