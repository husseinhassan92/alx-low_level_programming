#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: list
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	size_t node = 0;

	if (h != NULL)
	{
		count++;
		node++;
		h = h->next;
	}
	printf("%d\n", count);
	return (node);
}
