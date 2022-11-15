#include "dog.h"
#include <stdlib.h>

/**
  * *new_dog - creates a new dog.
  * @name: The name of the new dog.
  * @age: The age of the new dog.
  * @owner: The owner of the new dog.
  *
  * Return: NULL if the function fails.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	char *copy_name, *copy_owner;
	int y, nl = 0, ol = 0;

	new_name = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);

	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	for (y = 0; name[y] != '\0'; y++)
		nl++;

	for (y = 0; owner[y] != '\0'; y++)
		ol++;

	copy_name = malloc(sizeof(char) * (nl + 1));
	if (copy_name == NULL)
		return (NULL);

	copy_owner = malloc(sizeof(char) * (ol + 1));
	if (copy_name == NULL)
		return (NULL);

	for (y = 0; y <= nl; y++)
		copy_name[y] = owner[y];

	for (y = 0; y <= ol; y++)
		copy_owner[y] = owner[y];

	new_name->name = copy_name;
	new_name->owner = copy_owner;
	new_name->age = age;
	return (new_name);
}
