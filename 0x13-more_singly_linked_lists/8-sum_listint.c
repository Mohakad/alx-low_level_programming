#include "lists.h"
/**
 * sum_listint - sum of a listint_t list
 * @head: pointer to head
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

