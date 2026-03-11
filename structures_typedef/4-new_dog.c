#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog structure.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: ptr (Succes), or NULL (fail).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	while (name[len_name])
	{
		len_name++;
	}
	while (owner[len_owner])
	{
		len_owner++;
	}
	ptr->name = malloc(sizeof(char) * (len_name + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
	{
		ptr->name[i] = name[i];
	}
	ptr->owner = malloc(sizeof(char) * (len_owner + 1));
	if (ptr->owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i <= len_owner; i++)
	{
		ptr->owner[i] = owner[i];
	}
	ptr->age = age;
	return (ptr);
}
