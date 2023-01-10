#include "main.h"
#include <stdlib.h>

/**
*_strdup - copy string to malloc allocated memory
*@str: array size
*Return: NULL if size is 0 or pointer to the array
*/
char *_strdup(char *str)
{
	char *s;
	int i;
	int length;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	s = (char *) malloc((length + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
