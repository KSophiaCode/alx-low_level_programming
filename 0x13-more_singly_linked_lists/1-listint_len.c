#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* listint_len - returns the number of elements in a linked list
* @h: pointer that points to the head of a list
* Return: the amount of nodes in  a list
*/
size_t listint_len(const listint_t *h)

{
	size_t count = 0;/*number of nodes*/

	while (h != NULL)
	{

		h = h->next;
		count++;
	}

	return (count);
}
