#include "lists.h"

/**
 * pop_listint - Delete principal node of list
 * @head: List
 *
 * Return: Value of position 0;
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (!*head)
		return (0);

	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
