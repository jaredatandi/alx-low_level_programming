#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dynamic memory for dog_t
 * @d: pointer to struct dog_t
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
