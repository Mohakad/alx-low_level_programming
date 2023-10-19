#include "lists.h"
/*
 *print_list - prints all the elements of a list
 *@h: list pointer
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t non = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		non++;
		h = h->next;
	}
	return (non);
}
