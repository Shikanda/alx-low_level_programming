#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
*main - calculation of simple math operations
*@argc: no of arguements in array
*@argv: pointer array
*
*Return: o
*/
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *ops;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ops = argv[2];

	if ((*argv[3] == '0') && (*ops == '%' || *ops == '/'))

	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(ops) == NULL || ops[1] != '\0')

	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(ops)(num1, num2));

	return (0);
}
