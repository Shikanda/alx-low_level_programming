#include "main.h"

/**
*puts_half - prints every other character of a string
*@str: string
*
*Return: second half of the string
*/
void puts_half(char *str)
{
	int one;
	int i;
	int j;

	one = 0;

	for (i = 0; str[i] != '\0'; i++)
		one++;

	j = (one / 2);

	if ((one % 2) == 1)
		j = ((one + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
