#include "lists.h"

/**
 * add_dnodeint - Add new element
 * @head: List
 * @n: New element
 *
 * Return: New list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t *));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}

	(*head) = new;

	return (new);
}
