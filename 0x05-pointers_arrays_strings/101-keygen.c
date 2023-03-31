#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

/**
 *main - Generate random passwords
 *
 *Return: always 0
 */
int main(void)
{
	int length = 9;
	char password[length + 1];

	char *digits = "013456789";
	int digit_len = strlen(digits);

	char *lower = "abcdefghijklmnopqrstuvwxyz";
	int lower_len = strlen(lower);

	char *upper = "ABCDEFGIJKLMNOPQRSTUVWXYZ";
	int upper_len = strlen(upper);

	char *sym = "!@#$%^&*()";
	int sym_len = strlen(sym);

	srand(time(NULL) * getpid());
	for (int i = 0; i < length; i++)
	{
		int char_type = rand() % 4;

		if (char_type == 0)
			password[i] = digits[rand() % digit_len];
		else if (char_type == 1)
			password[i] = lower[rand() % lower_len];
		else if (char_type == 2)
			password[i] = upper[rand() % upper_len];
		else
			password[i] = sym[rand() % sym_len];
	}
	password[length] = '\0';
	printf("%s\n", password);
	return (0);
}
