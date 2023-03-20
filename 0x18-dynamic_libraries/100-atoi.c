#include "main.h"

/**
*_atoi - convert a string to an integer
*@s: string
*
*Return: integer
*/

int _atoi(char *s)
{
	int atoi;
	unsigned int i;

	atoi = 1;
	i = 0;

	do {
		if (*s == '-')
			atoi *= -1;

		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');

		else if (i > 0)
			break;

	} while (*s++);

	return (i * atoi);
}
