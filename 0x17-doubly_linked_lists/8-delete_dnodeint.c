#include "lists.h"
/**
 * delete_dnodeint_at_index-  delete node at a given position.
 * @index: ndex of the list
 * @head: head
 * Returns: the address of the new node, or NULL if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i;
    dlistint_t *temp = *head;
    if (*head == NULL || index <= 0)
        return (-1);
    for (i = 0; temp != NULL && i < index; i++)
        temp = temp->next;
    if (temp == NULL)
        return (-1);
    if (*head == NULL || temp == NULL)
    {
        free(temp);
        return (-1);
    }
    if (*head == temp)
    {
        *head = temp->next;
    }
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    free(temp);

    return (1);
}