#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */

int main(void)
{
	int num;
	char la;
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		puchar(la);

	putchar('\n');

	return (0);
}
