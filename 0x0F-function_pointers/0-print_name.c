#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to print
 * @f: pointer to print func
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
