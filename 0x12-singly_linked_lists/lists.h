#ifndef LIST_H
#define LIST_H

/**
 * struct list - Linked list
 * @str: String
 * @len: Size of string
 * @next: struct type list
 *
 * Description: Create linked list
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif
