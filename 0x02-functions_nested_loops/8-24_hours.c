#include "main.h"

/**
*jack_bauer - counts time 24 hr style
*
*
*Return: always 0
*/

void jack_bauer(void)
{
	int h, m;

	h = -1;
	while (h <= 22)
	{	h++;
		m = -1;
		while (m < 59)
		{	m++;
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
