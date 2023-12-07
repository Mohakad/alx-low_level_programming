#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *temp, *new = malloc(sizeof(dlistint_t));

    if (new == NULL || head == NULL)
        return (NULL);
    new->n = n;
    new->next = NULL;
    if(!*head)
    {
        new->prev = NULL;
        *head = new;
    }
    else
    {
        temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = new;
        new->prev = temp;
    }
    return (new);
}