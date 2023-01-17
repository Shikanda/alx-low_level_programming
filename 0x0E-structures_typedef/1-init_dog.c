#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*init_dog - initializes a variable of type struct dog
*@d: struct of the dog details
*@name: name of doggo
*@age: age of dog
*@owner: dog owner
*Return: init_ dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
