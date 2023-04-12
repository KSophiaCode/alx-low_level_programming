#include "main.h"
/**
 * get_endianness - return the endian of processor
 *
 * Return: for little 1, for big 0
 */
int get_endianness(void)
{
	char num;
	char *ptr;

	num = '1';
	ptr = &num;
	if (*ptr == 0)
		return (0);
	else
		return (1);
}
