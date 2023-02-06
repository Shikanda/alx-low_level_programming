#include "main.h"
#include <stdio.h>
/**
*print_binary - prints a binary value from the decimal input value
*@n: decimal number to be turned into binary
*Return: binary value
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);


	putchar(n & 1 ? '1' : '0');
}
