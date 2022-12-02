#include "lists.h"

/**
  * pop_listint - Deletes the head of a listint_t list.
  * @head: A pointer to the address of the listint_t list.
  *
  * Return: 0 if the linked list is empty.
  *         Otherwise, the head node's data(n).
  */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	hnode = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (hnode);
}
