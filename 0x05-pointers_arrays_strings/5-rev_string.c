#include "main.h"

/**
*rev_string- prints a new line to stdout
*@s: string to be printed and reversed
*
*Return: string to be written
*/

void rev_string(char *s)
{
	int str;
	int i;
	char se;

	str = 0;
	se = s[0];


	while (s[str] != '\0')
	{
		str++;
	}
	for (i = 0; i < str; i++)
	{
		str--;
		se = s[i];
		s[i] = s[str];
		s[str] = se;
	}
}
