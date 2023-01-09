#include <stdio.h>
/**
*main - entry point
*@argc: number of arrays
*@argv: array of strings
*Return: On success 1.
*
*/
int  main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
