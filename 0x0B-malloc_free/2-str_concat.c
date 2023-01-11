#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int v_len(char *s);
/**
*str_concat - contencate 2 strings
*@s1: 1st string
*@s2: 2nd string
*Return: NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *s;
	int index;
	int index2;

	if (s1 == NULL)
		s1 = (" ");
	if (s2 == NULL)
		s2 = (" ");
	if  ((s2 == NULL) && (s1 == NULL))
		s1 = (" ");
		s2 = (" ");

	i = v_len(s1);
	j = v_len(s2);

	s = (char *) malloc(((i + j) + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (index = 0; s1[index] != '\0'; index++)
			s[index] = s1[index];

	for (index2 = 0; s2[index2] != '\0'; index2++, index++)
			s[index] = s2[index2];
	s[index] = '\0';
	return (s);
}
/**
*v_len - gets length of string
*@s: string
*
*Return: length
*/
int v_len(char *s)

{
	int length;

	length = 0;
	while (*s++)
	{
		length++;
	}
	return (length);
}
