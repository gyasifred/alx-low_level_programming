#include "dog.h"
#include <stdio.h>

/**
  *init_dog - unction that initialize a variable of type struct dog
  *@d: struct dog
  *@name: name variable of strcut dog
  *@age: Age variable of struct dog
  *@owner: owner variable of struct dog
  *Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
