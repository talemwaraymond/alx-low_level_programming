#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - name will be printed  using pointer to function
 * @name: strings will be  added
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
