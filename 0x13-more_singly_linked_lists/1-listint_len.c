#include <stdio.h>
#include "lists.h"

/**
 *listint_len-Returns number of elements in a list
 *@h: pointer to head of list_t list
 *
 * Return: Return the number of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
