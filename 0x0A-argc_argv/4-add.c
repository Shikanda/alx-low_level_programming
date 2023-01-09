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
	int add;

	add = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
