#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
*print_strings- print strings followed by a new line.
*@n: count of remaining arguments
*@separator: string in the arguments
*Return: if string is NULL print nil
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, const char *));

		if (i != (n - 1))
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
