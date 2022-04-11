#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - stores new values in members
 * @name: pointer to string
 * @age: float
 * @owner: pointer to string
 * Return: ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*declare pointer to be used*/
	dog_t *ptr;
	/*allocating space for the pointer*/
	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*setting the strings and float to ptr*/
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
