#include "lists.h"
/**
 * print_dlistint - prints all data of doubly linked list
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node += 1;
	}
	return (node);
}
