#include "lists.h"

/**
 * get_nodeint_at_index - Locates the nth node of a linked listint_t list.
 * @head: A pointer to the head of the list.
 * @index: The node to locate.
 *
 * Return: nth node of the list.
 *         NuLL if the node is empty.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		return (NULL);

		head = head->next;
	}

	return (head);
}
