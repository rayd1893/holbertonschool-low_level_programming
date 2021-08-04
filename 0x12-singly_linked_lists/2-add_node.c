#include <string.h>
#include "lists.h"

int _str_len(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}

/**
 * add_node - Add node in the first position
 * @head: List
 * @str: New string
 *
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *string;
	int len;
	list_t *new;

	string = strdup(str);

	if (string == NULL)
		return NULL;

	new = malloc(sizeof(list_t));

	len = _str_len(string);

	new->str = (char *)malloc(len + 1);
	new->str = string;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
