#include "lists.h"
/**
 * get_dnodeint_at_index- find nth
 * @head: head
 * @index: location
 * Return: find or null
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        size_t i = 0;

        while (head)
        {
            if (i == index)
                return (head);
            i++;
            head = head->next;
        }
        return (NULL);
}