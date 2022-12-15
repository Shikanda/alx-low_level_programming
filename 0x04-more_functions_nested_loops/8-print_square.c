#include "main.h"

/**
*print_square - a function that prints a square, followed by a new line
*@size: hush squares
*Return: hush squares
*/

void print_square(int size)
{
	int h;
	int e;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 1; h <= size; h++)
		{
			_putchar('#');
			for (e = 2; e <= size; e++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}
