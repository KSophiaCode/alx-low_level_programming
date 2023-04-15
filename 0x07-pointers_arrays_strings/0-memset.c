#include "main.h"
/**
 * _memset - fill a block of memory with specific values
 * @s: the starting address of the memory filled
 * @b: the value
 * @n: number of bytes changed
 * Return: array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
