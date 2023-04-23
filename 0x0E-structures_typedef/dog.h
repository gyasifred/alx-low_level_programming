#ifndef DOG_H
#define DOG_H

/**
  *struct dog - Home Poppy
  *@name: name of poppy
  *@age: ge of poppy
  *@owner: ownner of poppy
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* ifndef DOG_H */
