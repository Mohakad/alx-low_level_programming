#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - new node at the beginning of a list
 * @head: double pointer list
 * @str: new string
 * Return: NULL or head
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int count = 0;

	list_t *newt;

	newt = malloc(sizeof(list_t));
	if (newt == NULL)
		return (NULL);
	while (str[count])
		count++;
	newt->str = strdup(str);
	newt->len = count;
	newt->next = *head;
	*head = newt;
	return (*head);
}
