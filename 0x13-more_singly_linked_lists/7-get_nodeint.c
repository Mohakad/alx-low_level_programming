#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: head node
 * @index: index of the node
 * Return: the linked list, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind;

	listint_t *curr = head;

	for (ind = 0; curr != NULL && ind < index; ind++)
		curr = curr->next;
	return (curr);
}
