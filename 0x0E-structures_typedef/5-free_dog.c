#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees all malloc spaces after use
 * @d: struct pointer which used the malloc space
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		/*free the malloc created generally the for strings*/
		free(d);
		free(d->name);
		free(d->owner);
	}
}
