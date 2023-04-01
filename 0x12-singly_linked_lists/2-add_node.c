#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - length of the string passed
 * @s: the string
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}

/**
 * add_node - prints length and string and returns amount of nodes
 * @head: pointer
 * @str: ha ex di
 * Return: amount of node
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *newNode;

	newNode = malloc(sizeof(newNode));
	 if (newNode == NULL)
	 return (NULL);
	 if (str == NULL)
	 {
	 free(newNode);
	 return (NULL);
	}
	 newNode->len = _strlen(str);
	 newNode->str = strdup(str);
	 newNode->next = *(head);
	 *head = newNode;

	 return (newNode);
}
