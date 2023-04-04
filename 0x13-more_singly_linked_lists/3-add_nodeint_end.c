#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head:pointer to the head
 * @n: int to be added
 * Return: pointer to new node added or Null
 */
listint_t *new_nodeint_end(listint **head, const int n)
{
	listint_t *new_node = NULL, *last_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;

		if (*head)
		{
			last_node = *head;

			while (last_node->next)
				last_node = last_node->next;
			last_node->next = new_node;
		}
		else
			*head = new_node;
	}
	return (new_node);
}
