#include "lists.h"
/**
 * free_listint - function free list
 * @head: pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
