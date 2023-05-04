#include "lists.h"

/**
 * insert_nodeint_at_index it returns the nth node of a linked list
 * @head is pointer to the head of the list
 * @index is index of the node to be added
 * @n is content of the new node
 * Return the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int k = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || idx > listint_len(*head))
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	while (head != NULL)
	{
		if (k == idx)
		{
			if (k == 0)
			{
				new_node->next = *head;
				*head = new_node;
				return (new_node);
			}
			new_node->next = previous_node->next;
			previous_node->next = new_node;
			return (new_node);
		}
		else if ((k + 1) == idx)
			previous_node = *head;
		head = &((*head)->next);
		k++;
	}
	return (NULL);
}

/**
 * listint_len is counts the number of nodes in a linked list
 * @h  is head of the list
 * Return will return  the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
