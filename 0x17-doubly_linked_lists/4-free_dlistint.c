#include "lists.h"
/**
 * free_dlistint - Free list
 * @head: list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head != NULL)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
