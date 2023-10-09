#include "dog.h"
#include <stdlib.h>
/**
  *stcopy- copy
  *@des: destination
  *@src: source
  *Return: copyed string
  */
char *stcopy(char *des, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		des[i] = src[i];
	des[i] = '\0';
	return (des);
}
/**
  *stlen- length
  *@s: string
  *Return: length
  */
char stlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
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

	int name_l = stlen(name);

	int own_len = stlen(owner);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc(sizeof(char) * (name_l + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (own_len + 1));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	stcopy(newdog->name, name);
	stcopy(newdog->owner, owner);
	newdog->age = age;
	return (newdog);
}
