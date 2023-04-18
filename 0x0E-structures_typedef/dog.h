#ifndef DOG_H
#define DOG_H

/**
  *struct dog - Home Poppy
  *@name: name of poppy
  *@age: ge of poppy
  *@owner: ownner of poppy
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* ifndef DOG_H */
