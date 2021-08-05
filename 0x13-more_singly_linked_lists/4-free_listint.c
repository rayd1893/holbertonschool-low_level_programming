#include "lists.h"

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
