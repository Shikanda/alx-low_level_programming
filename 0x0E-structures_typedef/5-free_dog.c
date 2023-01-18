#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*free_dog - frees dogs
*@d: malloc space dog to be freed
*Return: Always 0
*
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
