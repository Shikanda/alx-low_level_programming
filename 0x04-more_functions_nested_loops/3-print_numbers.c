#include "main.h"
/**
*print_numbers - prints 0 -9 then new line
*
*
*Return: always 0
*/
void print_numbers(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
