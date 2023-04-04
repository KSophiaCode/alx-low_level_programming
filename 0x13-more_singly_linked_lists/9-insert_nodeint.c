#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a position given
 *
 * @head: pointer
 * @idx: index of list where new node is added
 * @n: new node data
 * Return: Address of new node, Null if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp_node = *head;
	unsigned int i = 0;

	while (tmp_node && i < idx - 1)
	{
		tmp_node = tmp_node->next;
		i++;
	}
	if (tmp_node || (i == idx - 1 || idx == 0))
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node)
		{
			new_node->n = n;
			if (idx == 0)
			{
				new_node->next = *head;
				*head = new_node;
			}
			else
			{
				new_node->next = tmp_node->next;
				tmp_node->next = new_node;
			}
			return (new_node);
		}
	}
	return (NULL);
}
