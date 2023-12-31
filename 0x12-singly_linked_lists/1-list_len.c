#include "lists.h"
/**
 * list_len - prints the number of elements in a link
 * @h: head node
 * Return: length of node
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
