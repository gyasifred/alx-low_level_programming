#include "function_pointers.h"
#include <stdlib.h>

/**
  *print_name - Function to print name
  *@name: name to be printed
  *@f: function pointer
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
