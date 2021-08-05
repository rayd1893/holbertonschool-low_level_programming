#include "lists.h"

/**
 * free_listint2 - Free list
 * @head: List
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while (*head)
	{
		current = *head;
		*head = current->next;
		free(current);
	}

}
