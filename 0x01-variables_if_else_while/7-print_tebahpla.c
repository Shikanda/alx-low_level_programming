#include <stdio.h>
#include <stdlib.h>
/**
*main - reverse alphabet lowercase
*
*Return: always 0
*/

int main(void)
{
	char chAr;

	for (chAr = 'z'; chAr >= 'a'; chAr--)

		putchar(chAr);
	putchar('\n');
	return (0);
}
