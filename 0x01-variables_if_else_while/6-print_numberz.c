#include <stdio.h>
#include <stdlib.h>
/**
*main - numbers 0-10 but using putchar
*
*Return: always 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 10;)
	{
		putchar((i % 10) + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
