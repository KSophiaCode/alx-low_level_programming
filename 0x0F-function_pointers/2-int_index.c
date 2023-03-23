#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - return index value of numbers cmp function does not return 0
 * is_98 - check if a number is equal to 98
 * abs_is_98 - check if the absolute value of a number is 98
 * @size: number of elements in array
 * @array: array of integers
 * @cmp: is a pointer to the function to be used to compare values
 * Return : -1 if no element matches, If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

index = int_index(array, 20, is_98);
printf("%d\n", index);
index = int_index(array, 20, abs_is_98);
printf("%d\n", index);
index = int_index(array, 20, is_strictly_positive);

printf("%d\n", index);

return (0);
}
