#include "lists.h"

/**
 * list_len - Print list
 * @h: struct list
 *
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
