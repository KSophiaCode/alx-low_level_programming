#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - calls a function
 * @array: array of function
 * @size: size of array of function
 * @action: the function that acts on the array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
