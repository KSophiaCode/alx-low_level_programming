#include <stdio.h>
#include <stdlib.h>
/**
* main - Multipies two numbers
* @argc: number of command line arguments
* @argv: array that contains the program
* Return: 0 - success
*/
int main(int argc, char *argv[])
{
	int n, m, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	diff = n * m;

	printf("%i\n", diff);
	return (0);
}
