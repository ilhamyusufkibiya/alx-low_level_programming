#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add nodes - a function that add a new node
 * @head: node head
 * @str: string of the node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int a, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
