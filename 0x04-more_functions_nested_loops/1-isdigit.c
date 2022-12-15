#include "main.h"
/**
*_isdigit - check for 0-9
*@c: the input
*
*Return: 1 if it is a digit or 0 if not
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

