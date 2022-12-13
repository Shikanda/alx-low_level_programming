#include "main.h"

/**
*print_alphabet_x10 - entry point
*
*Return: always 0
*/

void print_alphabet_x10(void)
{
	int i = 0;

	while (i++ <= 9)

	{
		int ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

	_putchar('\n');
	}
}
