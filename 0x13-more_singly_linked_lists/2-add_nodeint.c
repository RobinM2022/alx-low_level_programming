#include "lists.h"

/**
  * add_nodeint - Adds a node to the beginning of a listint_t list.
  * @head: A pointer to the head of the listint_t list.
  * @n: The number of elements in a listint_t list.
  *
  * Return: NULL if function fails.
  *         Otherwise, the address of the new element.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (*head);
}
