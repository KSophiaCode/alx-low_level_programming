#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: pointer
 * Return: the head node's data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int data = 0;

	if (*head == NULL)
	{
		return (data);
	}
	else
	{
		tmp = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(tmp);
		return (data);
	}
}
