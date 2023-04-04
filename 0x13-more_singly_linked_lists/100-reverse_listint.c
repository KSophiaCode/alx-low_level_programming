#include "lists.h"
/**
 * reverse_listint - a function that reverses
 * @head: pointer
 * Return: pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv_node, *cur_node;

	if (*head != NULL)
	{
		prv_node = *head;
		cur_node = (*head)->next;
		*head = (*head)->next;

		prv_node->next = NULL;

		while (*head != NULL)
		{
			*head = (*head)->next;
			cur_node->next = prv_node;

			prv_node = cur_node;
			cur_node = *head;
		}
		*head = prv_node;
	}
	return (*head);
}
