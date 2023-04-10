#include "main.h"
/**
 * get_bit - get bit value as an index
 * @n: the integer to get bit value
 * @index: the n index to get bit value
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);
	return ((n >> index) & 1);
}
