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

	if (!head)
		return (NULL);


	for (i = 0; i < index && head; i++)
		head = head->next;

	if (i == index)
		return (head);

	return (NULL);
}
