#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: argument count
* @argv: argument vector
* Return: print ERROR if negative
*/
int main(int argc, char *argv[])
{
	char *opc = (char *)main;
	int i, no;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}


	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != no - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
