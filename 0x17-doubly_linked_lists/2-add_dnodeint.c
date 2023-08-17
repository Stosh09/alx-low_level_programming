#include "lists.h"

/**
 * add_dnodeint - Adds a new nnode at the beginning of the list
 * @head: Pointer to the head of the list
 * @n: The integer the new node will hold
 *
 * Return: If func fails - NULL
 * If func passes - adress of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
