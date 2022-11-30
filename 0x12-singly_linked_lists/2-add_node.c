#include "lists.h"
#include <string.h>

/**
  * add_node - Adds a new node to the beginning of a linked list.
  * @head: A pointer to the head of the linked list (list_t).
  * @str: The string to be added to the list.
  *
  * Return: NULL if the function fails.
  *         Otherwise, address of the new element.
  */
list_t *add_node( list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->len = len;
	new->str = dup;
	new->next = *head;

	*head = new;
	return (new);
}
