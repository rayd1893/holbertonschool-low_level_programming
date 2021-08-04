#include "lists.h"

/**
 * add_nodeint - Add new node to list
 * @head: New node
 * @n: value of n from new list
 *
 * Return: New node
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

	return (new);
}
