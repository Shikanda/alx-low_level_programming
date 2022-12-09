#include <stdio.h>
#include <stdlib.h>
/**
*main - numbers 0-10
*
*Return: always 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 10;)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
