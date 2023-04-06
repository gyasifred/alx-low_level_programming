#include <stdio.h>

/**
 *main - print program name
 *@argc: int
 *@argv: command line arguments
 *Return: Always (0)
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
