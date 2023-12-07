#include "lists.h"
/**
 *print_dlistint- print list
 *@h: head
 *Return: length
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
