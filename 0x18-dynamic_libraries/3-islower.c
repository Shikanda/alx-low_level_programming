#include "main.h"

/**
*_islower - check if lowercase
*@c: character checked
*Return: 1 or 0
*/

int _islower(int c)
{
	while (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}



