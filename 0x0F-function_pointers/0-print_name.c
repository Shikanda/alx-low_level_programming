#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
*print_name - prints a name
*@name: name array
*@f: pointer function
*@: character array
*Return : Always 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL && name == NULL)
		return;
	f(name);
}
