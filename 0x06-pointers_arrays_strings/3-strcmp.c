#include "main.h"
/**
*_strcmp - compares 2 strings
*@dest: 1st string
*@src: 2nd string
*
*Return: what to be copied from dest
*/
int _strcmp(char *s1, char *s2)
{
	int i;


	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
