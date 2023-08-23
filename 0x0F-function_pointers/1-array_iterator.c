#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a newline
 * @size: how many element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int r;

	if (array == NULL || action == NULL)
		return;

	for (r = 0; r < size; r++)
	{
		action(array[r]);
	}
}
