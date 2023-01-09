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
	int sum;

	sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
