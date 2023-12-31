#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that  adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *curNode;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	curNode = *head;
	while (curNode->next)
		curNode = curNode->next;
	curNode->next = newNode;

	return (newNode);
}
