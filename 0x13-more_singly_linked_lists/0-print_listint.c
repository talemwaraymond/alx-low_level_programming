#include <stdio.h>
#include "lists.h"

/**
 * print_listint - all the elements of a linked list will be printed
 * @h: linked list of type listint_t to print
 * Return:  nodes of a number
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
