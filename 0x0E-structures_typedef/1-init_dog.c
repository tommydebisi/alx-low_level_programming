#include "dog.h"

/**
 * init_dog -
 * @d: struct created
 * @name: pointer to string
 * @age: float value
 * @owner: pointer to string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*initializing struct*/
	d -> name = name;/*we setting the pointer to the string address*/
	d -> age = age;
	d -> owner = owner;
}
