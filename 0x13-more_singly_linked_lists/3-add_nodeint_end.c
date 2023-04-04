#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head pointer of linked list
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *node, *temp;

	node = malloc(sizeof(listint_t)); /* make new node and set values */
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL) /* account for empty list by pointing head to node */
		*head = node;
	else
	{
		temp = *head; /* set tmp ptr to iterate w/o moving head ptr */

		while (temp->next != NULL) /* iterate till last node */
			temp = temp->next;
		temp->next = node; /* link last node to new node */
	}

	return (node);
}
