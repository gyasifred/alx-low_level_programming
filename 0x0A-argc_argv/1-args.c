#include <stdio.h>

/**
 *main - Print the number of command line arguments
 *@argc: int
 *@argv: string array of command line arguments
 *Return: Always (0)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
