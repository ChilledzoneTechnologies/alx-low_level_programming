#include <stdio.h>
#include "lists.h"

/**
 * print_list -function that prints all the elements of a linked list
 * @h: pointer to the list_t list
 *
 * Return: the length of the list
 */
size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}

	return (l);
}
