#include "lists.h"
/**
 * reverse_listint-  function that reverses a listint_t linked list
 * @head: head of list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	return (prev);
}
