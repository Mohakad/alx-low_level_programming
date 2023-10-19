#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add at end of a linked list
 * @head: double list_t list
 * @str: string
 * Return: new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count = 0;

	list_t *newt;
	
	list_t *temp = *head;

	newt = malloc(sizeof(list_t));
	if (!newt)
		return (NULL);
	while (str[count])
		count++;
	newt->str = strdup(str);
	newt->len = count;
	newt->next = NULL;
	if (*head == NULL)
	{
		*head = newt;
		return (newt);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newt;

	return (newt);
}
