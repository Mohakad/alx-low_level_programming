#include "lists.h"
/**
 * add_nodeint_end- adds a new node at the end of a listint_t
 * @head: lists
 * @n: element to add
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnode;

	listint_t *curr;

	addnode = malloc(sizeof(listint_t));
	if (addnode == NULL)
		return (NULL);
	addnode->n = n;
	addnode->next = NULL;
	curr = *head;
	if (*head == NULL)
		*head = addnode;
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = addnode;
	}
	return (addnode);
}
