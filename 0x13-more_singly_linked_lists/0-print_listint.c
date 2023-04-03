#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 * @h: pointer that points to the head of a list
 * Return: return the amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
