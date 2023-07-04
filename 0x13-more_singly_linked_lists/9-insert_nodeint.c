#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *prev;

	if (head != NULL)
	{
		node = malloc(sizeof(listint_t));
		if (node != NULL)
		{
			node->n = n;
			if (idx == 0)
			{
				node->next = *head;
				*head = node;
				return (node);
			}
			prev = *head;
			for (i = 1; i < idx && *head != NULL; i++)
				prev = prev != NULL ? prev->next : NULL;
			if (i == idx && prev != NULL)
			{
				node->next = prev->next;
				prev->next = node;
				return (node);
			}
			else
			{
				free(node);
			}
		}
	}
