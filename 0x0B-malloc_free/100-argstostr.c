#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*argstostr - concatenate all arguments
*@ac: integer input
*@av: array
*Return: NULL or pointer to a new string
*/
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int count;
	char *strhold;
	int l;

	count = 0;
	l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
	}
	count = count + (ac + 1);

	strhold = malloc(count * sizeof(char));
	if (strhold == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			strhold[l] = av[i][j];
			l++;
		}
		if (strhold[l] == '\0')
			strhold[l++] = '\n';
	}
	return (strhold);
}
