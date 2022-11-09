#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: the beginning of the list to free
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
