#include "main.h"
#include <stdlib.h>
/**
*_strchr - locates a character in a string
*@s: string in question
*@c: the character to be located
*
*Return: first occurence of c or Null
*/
char *_strchr(char *s, char c)
{
	int look;

	for (look = 0; s[look] >=  '\0'; look++)
	{
		if (s[look] == c)
			return (s + look);
	}
	return ('\0');
}
