#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
*Main - entry point
*Description: variable
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0
		printf("%d will be positive\n", n);
	else if (n < 0)
		printf("%d will be negative\n", n);
	else
		printf("%d will be zero\n", n);
	return (0);
}
