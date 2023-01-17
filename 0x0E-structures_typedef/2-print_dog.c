#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_dog - print the struct of a dog
*@d: struct of the dog details
*Return: init_ dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		 printf("Name: (nil)\n");
	if ((*d).age <= 0)
		 printf("Age: (nil)\n");
	if ((*d).owner == NULL)
		 printf("Owner: (nil)\n");

	printf("Name:  %s\n", d->name);
	printf("Age:  %6f\n", d->age);
	printf("Owner:  %s\n", d->owner);
}
