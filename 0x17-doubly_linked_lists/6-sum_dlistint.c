#include "lists.h"

/**
 * sum_dlistint - Sum all the data of a list
 * @head: Head of the list
 *
 * Return the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (sum)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
