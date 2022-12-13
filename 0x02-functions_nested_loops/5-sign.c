#include "main.h"

/**
*print_sign - print the sign of the number
*@n: number to get
*
*Return: 0, 1, -1
*/

int print_sign(int n)
{
	if (n > 0)
	{	_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if	(n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	else

	{	_putchar('-');
		return (-1);
	}	_putchar('\n');

}

