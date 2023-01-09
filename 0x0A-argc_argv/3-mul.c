#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*@argc: number of arrays
*@argv: array of strings
*Return: On success 0 else 1 with Error.
*atoi - converts string into an integer
*/
int  main(int argc, char *argv[])
{
	int i;
	int product;

	product = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			product = product * atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	return (0);
}
