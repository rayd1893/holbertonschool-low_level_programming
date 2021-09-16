#include "lists.h"

/**
 * dlistint_len - Length of list
 * @h: Doubly linked list
 *
 * Return: Length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
