#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*new_dog - creates a new dog
*@name: dog name
*@age: dog age
*@owner: dog owner
*Return: NULL if function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *cpname;
	char *cpowner;
	unsigned int i;
	unsigned int nalen;
	unsigned int ownlen;

	nalen = 0;
	ownlen = 0;
	new = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		nalen++;

	for (i = 0; owner[i] != '\0'; i++)
		ownlen++;

	cpname = malloc(sizeof(char) * (nalen + 1));
		if (cpname == NULL)
			return (NULL);
	cpowner = malloc(sizeof(char) * (ownlen + 1));
		if (cpowner == NULL)
			return (NULL);

	for (i = 0; i <= nalen; i++)
		cpname[i] = name[i];
	for (i = 0; i <= ownlen; i++)
		cpowner[i] = owner[i];

	new->name = cpname;
	new->owner = cpowner;
	new->age = age;
	return (new);
}
