#include <stdio.h>
#include <stdlib.h>
/**
*main - alphabet lowercase except for e and q
*
*Return: always 0
*/

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
