#include "main.h"

/**
*more_numbers - entry point
*
*Return: always 0
*/

void more_numbers(void)
{
	int i = 0;

	while (i++ <= 9)

	{
		int ch = 0;

		while (ch <= 14)
		{
			if (ch >= 10)
			{
				_putchar((ch / 10) + '0');
			}

			_putchar((ch % 10) + '0');
			ch++;
		}
	_putchar('\n');
	}
}
