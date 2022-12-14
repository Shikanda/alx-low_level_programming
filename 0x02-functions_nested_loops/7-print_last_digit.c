#include "main.h"

/**
*print_last_digit - prints the last digit
*@r: the digit
*
*Return: last_digit
*/

int print_last_digit(int r)
{
	int j;

	j  = (r % 10);

	if (j < 0)
	{
		j = (-1 * j);
	}
	_putchar(j + '0');

	return (j);
}
