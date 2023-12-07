#include "lists.h"
/**
 * add_dnodeint- adds a new node at the beginning of a dlistint_t list.
 * @head: head
 * @n: new lis
 * Return: the address of the new element, or NULL if it faile
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
