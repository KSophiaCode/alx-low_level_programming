#include "lists.h"
/**
 * free_listint2 - frees a const
 * and set the heas to NULL
 * @head: pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	while (head && *head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
