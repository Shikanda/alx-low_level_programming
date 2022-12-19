#include "main.h"

/**
*puts2 - prints every other character of a string
*@str: string
*
*Return: string to be written
*/
void puts2(char *str)
{
	int s;
	int count;

	s = 0;
	count = 0;

	while (str[s++])
	{
		count++;
	}
	for (s = 0; s < count; s += 2)
		_putchar(str[s]);

	_putchar('\n');
}
