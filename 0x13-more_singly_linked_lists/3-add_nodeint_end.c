#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end- Adds node at end of list
 * @head: Pointer to adress of head of list
 * @n: integer to add in new node
 * Return: if function fails - NULL
 *         if pass-adress of new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new, *last;

    new = malloc(sizeof(listint_t));
    if(new == NULL)
    return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
     *head = new;

     else{
        last = *head;
        while (last->next != NULL)
        last = last->next;
        last->next = new;
     }

     return(*head);
}
