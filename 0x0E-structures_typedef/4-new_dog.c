#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
  *_strdup - returns a pointer to a newly allocated space in memory
  *@str: string
  *Return: dest
  */
char *_strdup(char *str)
{
	char *dest;
	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	dest = malloc(sizeof(char) * len);
	if (dest == NULL)
	{
		return (NULL);
	}
	strcpy(dest, str);
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new_dog (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dog_name, *dog_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog_name  = _strdup(name);
	if (dog_name == NULL)
	{
		free(dog_name);
		return (NULL);
	}
	dog_owner = _strdup(owner);
	if (dog_owner == NULL)
	{
		free(dog_owner);
		free(dog);
		return (NULL);
	}
	dog->name = dog_name;
	dog->age = age;
	dog->owner = dog_owner;
	return (dog);
}
