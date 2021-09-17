#include "lists.h"

/**
 * get_dnodeint_at_index - Get element by index
 * @head: List
 * @index: Index
 *
 * Return: Element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		h = head;
		if (i == index)
			return (h);
		i++;
		head = head->next;
	}

	return (NULL);
}
