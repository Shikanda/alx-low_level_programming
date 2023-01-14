#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - concatecates 2 strings
*@s1: first  string
*@s2: second string
*@n: number of bytes
*Return: pointer to allocated memory if successful
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int st1;

	st1 = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)

	{
		st1++;
	}

	str = malloc(sizeof(char) * (st1 + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[st1] = s1[st1];

	for (i = 0; s2[i]  && i < n; i++)
	{
		str[st1++] = s2[i];
		st1++;
	}
	str[st1] = '\0';
	return (str);
}
