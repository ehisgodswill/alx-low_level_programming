#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts node at given index
 * @head: A pointer to listint_t structure
 * @idx: The index of the list
 * @n: An integer data for new node
 * Return: The address to new node at specified index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	while (++i < idx && *head)
	{
		*head = (*head)->next;
		if ((*head) == NULL)
		{
			*head = temp;
			return (NULL);
		}
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = (*head)->next;
		(*head)->next = newnode;
		(*head) = temp;
	}
	return (newnode);
}
