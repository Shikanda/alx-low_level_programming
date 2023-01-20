#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
*print_numbers - sum all the parameters.
*@n: count of remaining arguments
*@separator: string in the arguments
*Return: 0 if n is NULL
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	unsigned int j;

	if (separator == NULL)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{

		j = va_arg(list, const unsigned int);
			printf(" %d,", j);

		if (i != (n-1))
			printf("%s", separator);

	}

	printf("\n");
	va_end(list);
}
