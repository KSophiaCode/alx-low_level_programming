#include "main.h"

/**
 * _strpbrk - the Entry point
 *@s: the input
 *@accept the input
*Return: 0 on success
*/
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
