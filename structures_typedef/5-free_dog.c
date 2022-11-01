#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees the dog
  * @d: dog that's gonna be freed
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
