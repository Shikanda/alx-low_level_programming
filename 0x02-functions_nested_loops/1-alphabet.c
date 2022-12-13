#include "main.h" 

/**
*main - alphabet lowercase
*
*Return: always 0
*/

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
