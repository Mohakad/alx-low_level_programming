#include "dog.h"
#include <stdlib.h>
/**
  *init_dog- initialize struct dog
  *@d: memory of struct
  *@name: give name
  *@age: dogs
  *@owner: whos dog
  *Return: void.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
