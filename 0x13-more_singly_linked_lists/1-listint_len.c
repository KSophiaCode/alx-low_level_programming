#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* listint_len - returns the number of elements in a linked list
* @h: pointer that points to the head of a list
* Return: the amount of nodes in  a list
*/
size_t listint_len(consy listint_t *h)

{
	size_t count = 0;

	while (h != NULL)
	{

		h = h->next;
		count++;
	}

	return (count);
}
