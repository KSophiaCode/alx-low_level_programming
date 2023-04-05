#include "lists.h"
/**
 * find_listint_loop - finds the loop in a list
 * @head: pointer to fist node in the list
 * Return: address of node or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = NULL;
	listint_t *hare = NULL;

	if (head == NULL)
		return (NULL);

		tortoise = head;
		hare = head;

		while (1)
		{
		tortoise = tortoise->next;

		hare = (hare->next);
		if (hare == NULL)
			return (NULL);

		hare = (hare->next);

		if (hare == NULL)
		return (NULL);

		if (tortoise == hare)
		break;

		}
		tortoise = head;
		while (1)
		{
		if (tortoise == hare)
			break;
		tortoise = tortoise->next;
		hare = (hare->next);
		}
		return (tortoise);
}
