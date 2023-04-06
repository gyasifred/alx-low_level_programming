#include <stdio.h>

/**
  *main - print all program arguments
  *@argc: int
  *@argv: array of strings
  *Return: Always (0)
  */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
