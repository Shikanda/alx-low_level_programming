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
	int coins;
	int cents;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}
	coins = atoi(argv[1]);
	cents = 0;
	while (cents - 25)
	{
		coins++;
		while (cents >= 25)
		{
			cents = cents - 25;
		}
		while (cents >= 10)
		{
			cents = cents - 10;
		}
		while  (cents >= 5)
		{
			cents = cents - 5;
		}
		while (cents >= 2)
		{
			cents = cents - 2;
		}
		while (cents >= 1)
		{
			cents = cents - 1;
		}
		coins--;
	}
	return (coins);
}
