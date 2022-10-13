#include "function_pointers.h"
#include <stdlib.h>
/**
 * Write a function that prints a name
 * print_name: a function that prints a name
 * @name: string
 * @f: pointer to the function
**/

void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;
	f(name);
}
