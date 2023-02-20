#include <stdio.h>
/**
 * main - program entry point
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e'; || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
