#include "lists.h"

void printFirst(void) __attribute__ ((constructor));

/**
  *printFirst - print before main function
  *Return: void
  */

void printFirst(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon ");
	printf("my back!\n");
}
