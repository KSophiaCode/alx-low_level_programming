#include "lists.h"
/**
 * sum_listint - sum of the data (n) of a list
 * @head: pointer
 * Return: the sum of data
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	unsigned int ans = 0;

	if (tmp)
	{

		while (tmp)
		{
			ans += tmp->n;
			tmp = tmp->next;
		}
		return (ans);
	}
	return (0);
}
