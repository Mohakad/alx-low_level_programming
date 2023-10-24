#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head node
 * @index: index of the node
 * Return: 1 succees, -1 failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *prv;

	unsigned int i;

	if (*head == NULL)
		return (-1);
	t = *head;
	prv = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	for (i = 0; t != NULL && i < index; i++)
	{
		prv = t;
		t = t->next;
	}
	if (t == NULL)
		return (-1);
	prv->next = t->next;
	free(t);
	return (1);
}
