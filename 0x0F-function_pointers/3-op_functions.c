#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <stddef.h>

/**
*op_add - adds 2 integers
*@a: 1st integer
*@b: 2nd integer
*Return: always 0
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - subracts 2 integers
*@a: 1st integer
*@b: 2nd integer
*Return: 0
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiplies 2 integers
*@a: 1st integer
*@b: 2nd integer
*Return: 0
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - Divides 2 integers
*@a: 1st integer
*@b: 2nd integer
*Return: ALways 0
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - Gets modulus of integers
*@a: 1st integer
*@b: 2nd integer
*:
*Return: ALways 0
*/
int op_mod(int a, int b)
{
	return (a % b);
}
