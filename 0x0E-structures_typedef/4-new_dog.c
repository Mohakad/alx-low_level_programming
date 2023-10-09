#include "dog.h"
#include <stdlib.h>
/**
  *new_dog- new dot_t
  *@name: new name
  *@age: new age
  *@owner: owner name
  *Return: NULL or newdog info
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc(sizeof(name));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(owner));
	if (newdog->owner == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = name;
	newdog->owner = owner;
	newdog->age = age;
	return (newdog);
}
