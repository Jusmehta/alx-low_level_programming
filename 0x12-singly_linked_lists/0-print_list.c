#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
	/*
	const list_t *ptr = 0;

	if (h == NULL)
	{
		return (0);
	}

	if (h != NULL)
	{
		ptr = h;
		while (ptr != NULL)
		{
			count++;
			if (ptr->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%u] %s\n", ptr->len, ptr->str);
			}
			ptr = ptr->next;
		}
	}
	return (count);
	*/
}
