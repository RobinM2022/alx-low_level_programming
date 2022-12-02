#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @n: The number of elements in the list.
 *
 * Return: NULL if function fails.
 *         Otherwise, address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
