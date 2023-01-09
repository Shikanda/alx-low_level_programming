#include "main.h"

/**
*_puts - prints a new line to stdout
*@str: string to be printed
*
*Return: always 0
*/

void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
