#include "main.h"

/**
 * set_bit - set the value of a bit to 1
 * at a given index
 * @n: unsigned int pointer
 * @index: the index of a bit
 * Return: on success 1, on error -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 62)
	return (-1);

	m = 1 << index;

	*n = (*n | m);

	return (1);
}
