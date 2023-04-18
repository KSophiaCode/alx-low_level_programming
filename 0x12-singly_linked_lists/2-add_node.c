#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add new node begining of list_t
 * @head: pointer to struct
 *
 * @str: string
 * Return: the address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	int len = 0;

	ptr = (list_t *)malloc(sizeof(list_t));
	if (ptr == NULL)
		return (ptr);
	ptr->str = strdup(str);

	if (*head != NULL)
		ptr->next = *head;
	else
		ptr->next = NULL;
	while (str[len])
		len++;
	ptr->len = len;
	*head = ptr;
	return (*head);

}
