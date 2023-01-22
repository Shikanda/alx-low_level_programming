#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
*print_all - print a list of types of arguments followed by a new line.
*@format: the arguments
*Return: if string is NULL print nil
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	int j;
	char *separator;
	char *lett;

	i = 0;
	j = 0;
	separator = ", ";

	va_start(args, format);
	while (format && format[i])
		i++;
	while (format && format[j])
	{
		if (j == (i - 1))
			separator = "";

		switch (format[j])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), separator);
			break;
		case 's':
			lett = va_arg(args, char *);
			while (lett == NULL)
				lett = "(nil)";
			printf("%s%s", lett, separator);
			break;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
