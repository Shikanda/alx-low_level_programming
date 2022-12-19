#include "main.h"
#include "stdio.h"

/**
*print_array - prints every other character of a string
*@n: number of elements
*@a: pointer
*Return: second half of the string
*/
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
		printf("%d, ", a[j]);
	if (j == (n - 1))
		printf("%d", a[n - 1]);

	printf("\n");
}
