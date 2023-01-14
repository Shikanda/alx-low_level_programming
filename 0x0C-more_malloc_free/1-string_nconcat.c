#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*string_noncat - concatecates 2 strings
*@s1: first  string
*@s2: second string
*@n: number of bytes
*Return: pointer to allocated memory if successful
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int j;
	unsigned int st1;
	unsigned int st2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	if (n < j)
		j = n;

	j = j + i;

	str = malloc(sizeof(char *) * (j + 1));

	if (str == NULL)
		return (NULL);

	for (st1 = 0; st1 < i; st1++)
		str[st1] = s1[st1];

	for (st2 = 0; st2 < j; st2++)
	{
		str[st1] = s2[st2];
		st1++;
	}
	st1++;
	str[st1] = '\0';
	return (str);
}
