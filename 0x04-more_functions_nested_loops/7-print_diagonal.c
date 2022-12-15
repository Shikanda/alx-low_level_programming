#include "main.h"

/**
*print_diagonal - draw a line in the terminal
*@n: times to print backslashes
*
*Return: backslashes
*/

void print_diagonal(int n)
{
	int bk;
	int nl;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		bk = 1;
		while (bk <= n)
		{
			nl = 1;
			while (nl < bk)
			{
				_putchar(' ');
				nl++;
			}
			_putchar('\\');
			bk++;
			_putchar('\n');
		}
	}
}
