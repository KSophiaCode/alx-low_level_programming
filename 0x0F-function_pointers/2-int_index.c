#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for an int
 * @array: pointer
 * @size: dimension
 * @cmp: pointer to function
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if ((cmp == 0) || (array == 0) || (size <= 0))
		return (-1);
	while (index < size)
	{
		if (cmp(array[index]))
			return (1);
			index++;
		}
		return (-1);
}
