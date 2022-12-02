#include "lists.h"

/**
  * free_listint2 - Frees a listint_t list.
  * @head: A pointer to the head of the listint_t list.
  * Return: Nothing.
  * Description - Sets the head to NULL.
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tmp = curr) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}

