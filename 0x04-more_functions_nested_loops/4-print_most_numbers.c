#include "main.h"
/**
*print_most_numbers - prints 0 -9 then new line but not 2 and 4
*
*
*Return: always 0
*/
void print_most_numbers(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		if ((ch != '2') && (ch != '4'))
		{
			_putchar(ch);
		}
		ch++;
	}

	_putchar('\n');
}
