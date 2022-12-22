#include "main.h"
/**
*leet - encode letters to number 1337 in the string
*@str: the strings to be changed
*
*Return: pointer to string
*/
char *leet(char *str)
{
	int i;
	int x;
	int leet[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (str[i] == leet[x])
			{
				str[i] = num[x / 2];
				x = 9;
			}
		}
	}
	return (str);
}
