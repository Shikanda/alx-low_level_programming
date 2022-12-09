#include <stdio.h>

/**
 * main - Hexadecimal in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char chAr;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (chAr = 'a'; chAr <= 'f'; chAr++)
		putchar(chAr);

	putchar('\n');

	return (0);
}
