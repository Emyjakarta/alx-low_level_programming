#include "function_pointers.h"
/**
 * print_name-function that prints a name
 * @name: name, variable of type char *
 * @f: pointer to a function that takes char * and returns void
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
