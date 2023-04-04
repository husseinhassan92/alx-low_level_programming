#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
