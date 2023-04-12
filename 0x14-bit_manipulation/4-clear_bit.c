#include "main.h"

/**
 * clear_bit - set the value of bit to 0
 * at a given index
 * @n: the unsigned int pointer
 * @index: the bit index
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 62)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
