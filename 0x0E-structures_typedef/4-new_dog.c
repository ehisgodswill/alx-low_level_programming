#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *namecpy, *ownercpy;

	newdog = malloc(sizeof(dog_t));
	if (name == NULL || owner == NULL || newdog == NULL)
		return (NULL);
	namecpy = strdup(name);
	ownercpy = strdup(owner);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
