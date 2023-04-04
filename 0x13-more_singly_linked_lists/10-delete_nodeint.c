#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to head pointer of linked list
 * @index: index to delete node
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *temp, *temp1;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (i < (index - 1) && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (i != (index - 1) || temp->next == NULL)
		return (-1);

	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);

	return (1);
}
