#include <stdio.h>
#include <stdlib.h>
/**
*main - alphabet lowercase and upper
*
*Return: always 0
*/

int main(void)
{
	int ch = 'a';
	int Ch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (Ch <= 'Z')
	{
		putchar(Ch);
		Ch++;
	}
	putchar('\n');
	return (0);
}
