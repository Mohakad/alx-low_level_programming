#include "lists.h"
/**
 * insert_dnodeint_at_index-  inserts a new node at a given position.
 * @idx: ndex of the list
 * @h: head
 * Returns: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i;
    dlistint_t *new = NULL, *temp;
    if (idx == 0)
    new = add_dnodeint(h, n);
    else
    {
        i = 1;
        temp = *h;
        if (temp != NULL)
            while (temp->prev != NULL)
                temp = temp->prev;
        while (temp)
            {
                if (i == idx)
                {
                    if (temp->next == NULL)
                        new = add_dnodeint_end(h, n);
                    else
                    {
                        new = malloc(sizeof(dlistint_t));
                        if (new != NULL)
                        {
                            new->n = n;
                            new->next = temp->next;
                            new->prev = temp;
                            temp->next->prev = new;
                            temp->next = new;
                        }
                    }
                    break;
                }
                i++;
                temp = temp->next;
            }
            
            
    }
    return (new);
}