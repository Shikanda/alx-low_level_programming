#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Description: Fiizz Buzz
*
*Return: always 0
*/

int main(void)
{
	int i;

	i = 0;
	while (i <= 99)
	{
		i++;
		if (i % 15 == 0)
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}

