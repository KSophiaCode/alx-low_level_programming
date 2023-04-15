#include "main.h"
/**
 * _memcpy - a function that copies area of memory
 * @dest: main memory
 * @src: memory copied to
* @n: nuimber of bytes
 * Return: copied memory and n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
