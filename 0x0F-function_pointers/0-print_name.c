#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints the names as it is
 * @name: name if a person
 * @f: A pointer function
 * author: KSophiaCode
 * Return: Nothing to rerurn with VOID R_type
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if its NULL */
		return;
	f(name);
}
