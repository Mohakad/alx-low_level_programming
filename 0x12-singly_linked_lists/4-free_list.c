#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees linked list
 * @head: to be freed
 * Return :void
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
