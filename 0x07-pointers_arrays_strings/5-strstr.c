#include "main.h"
#include <stdio.h>
/**
*_strstr - locate a substring
*@haystack: string
*@needle: a substring in haystack
*
*Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *full = haystack;
		char *sub = needle;

		while (*full == *sub && *sub != '\0')
		{
			full++;
			sub++;
		}
		if (*sub == '\0')
			return (haystack);
	}
	return (NULL);
}
