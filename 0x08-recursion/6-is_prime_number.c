#include "main.h"
/**
*is_prime_number - returns 1 if not a prime number
*@n: input number
*
*Return: Always 0
*/
int is_prime_number(int n)
{
	int i;

	i = 1;
	if (n % 1 == n)
		return (0);
	else
		return (is_prime_number(n + 1));

}
