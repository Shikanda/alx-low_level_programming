#include "main.h"

/**
*print_rev- prints a new line to stdout
*@s: string to be printed in reverse
*
*Return: always 0
*/

void print_rev(char *s)
{
	int str;
	int i;
	int n;
	
	str = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		str++;
	}

	for (n = (str - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
