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
	if (d->name == NULL)
		 printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);


	if (d->age <= 0)
		 printf("Age: %6f\n");
	else
		printf("Age: %6f\n", d->age);


	if (d->owner == NULL)
		 printf("Owner:(nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
