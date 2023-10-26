#include "lists.h"
/**
 * listint_len- calculate number of elements in list
 * @h: elements in list
 * Return:  the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t lisnum = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		lisnum++;
		h = h->next;
	}
	return (lisnum);
}
