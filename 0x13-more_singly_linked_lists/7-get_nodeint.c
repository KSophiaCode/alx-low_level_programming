#include "lists.h"
/**
 * get_nodeint_at_index - finds the nth node of list
 * @head: pointer
 * @index: integer index
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *imp = head;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (0);
}
