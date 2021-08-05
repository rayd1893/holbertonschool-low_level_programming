#include "lists.h"

/**
 * sum_listint - Sum of elements by list
 * @head: List
 *
 * Return: Sum of elements
 */
int sum_listint(listint_t *head)
{
	int sum  = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
