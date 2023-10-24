#include "lists.h"
/**
 * pop_listint - deletes the head
 * @head: pointer to the first
 * Return: the data inside the element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
