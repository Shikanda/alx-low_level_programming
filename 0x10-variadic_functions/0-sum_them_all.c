#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
*sum_them_all - sum all the parameters.
*@n: count of remaining arguments
*
*Return: 0 if n is NULL
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list add_em;
	unsigned int i;
	unsigned int add;

	if (n == 0)
		return (0);

	va_start(add_em, n);

	add = 0;
	for (i = 0; i < n; i++)
	{
		add = add + va_arg(add_em, unsigned int);
	}
	va_end(add_em);
	return (add);
}
