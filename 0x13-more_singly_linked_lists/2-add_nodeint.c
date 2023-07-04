#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at beginning
 *                of listint-t list
 * @head: pointer to adress of head of listint_t
 * @n: Integer new node will contain
 *
 * Return: If function fails-NULL
 *         If successful- adress of new node.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
