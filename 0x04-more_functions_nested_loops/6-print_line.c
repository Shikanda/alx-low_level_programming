#include "main.h"

/**
*print_line - draw a line in the terminal
*@n: times to print underscore
*
*Return: line
*/

void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		line = 1;
		while (line <= n)
		{
			_putchar('_');
			line++;
		}
		_putchar('\n');
	}
}
