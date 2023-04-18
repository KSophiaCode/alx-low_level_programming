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
	int i;

	if ((cmp == 0) || (array == 0) || (size <= 0))
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
			i++;
		}
		return (-1);
}
