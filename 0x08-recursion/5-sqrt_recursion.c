#include "main.h"
/**
*_sqrt_recursion - return the natural square root of a number
*@n: number
*
*Return: Always 0
*/
int _sqrt_recursion(int n)
{
	int temp;

	temp = 0;
	if (n % 1 == 0)
		return (-1);
	else
		return (_sqrt_recursion((n / temp + temp) * 2));
}
