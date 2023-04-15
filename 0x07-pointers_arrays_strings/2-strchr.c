#include "main.h"
/**
 * _strchr - the Entry point
 * @s: input source
 * @c input source
 * Return: 0 on success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
