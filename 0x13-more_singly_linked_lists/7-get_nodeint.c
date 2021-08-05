#include "lists.h"

/**
 * get_nodeint_at_index - Get node at index
 * @head: List
 * @index: Position
 *
 * Return: Node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index; i++)
		head = head->next;

	if (!head)
		return (NULL);

	return (head);
}
