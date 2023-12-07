#include "lists.h"
/**
 *dlistint_len- length list
 *@h: head
 *Return: n of eleme
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t l = 0;

	if (h == NULL)
		return (l);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
