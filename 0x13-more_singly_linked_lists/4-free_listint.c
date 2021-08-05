#include "lists.h"

/**
 * free_listint - Free list
 * @head: List
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{

	listint_t *ptr;

	if (!head)
		return;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}

}
