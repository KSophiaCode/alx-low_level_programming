#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints length and string and returns amount of nodes
 * @h: pointer to a struct constant
 * Return: amount of node
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
