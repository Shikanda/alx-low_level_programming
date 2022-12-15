#include "main.h"

/**
*print_triangle - it will print  a triangle
*@size: triangle
*Return: triangle made up of #
*/

void print_triangle(int size)
{
	int w, l, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l <= (size - 1); l++)
		{
			for (w = 0; w < (size - 1) - l; w++)
			{
				_putchar(' ');
			}
			for (r = 0; r <= l; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
