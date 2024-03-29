#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to head of doubly linked list
 * @index: given index
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}
	while (index && head->next != NULL)
	{
		head = head->next;
		index--;
	}
	if (index == 0)
	{
		return (head);
	}
	return (NULL);
}
