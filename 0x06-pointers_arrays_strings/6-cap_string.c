#include "main.h"
/**
*cap_string - capitalize first words in the string
*@str: the strings to be changed
*
*Return: pointer to string
*/
char *cap_string(char *str)
{
	int i;
	int x;
	int upper;
	int space[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	upper = 32;


	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - upper;
		}

		upper = 0;

		for (x = 0; x <= 12; x++)
		{
			if (str[i] == space[x])
			{
				x = 12;
				upper = 32;
			}
		}
	}
	return (str);
}
