#include <stdio.h>
#include <stdlib.h>

/**
* main_opcodes - The program takes one command-line argument, whi
* ch is the number of bytes of the main function's opcode to print.
* @c: the command linee
* Return: print ERROR if negative
*/
int main(int argc, char *argv[]) 
{
	if (argc != 2) 
	{
		printf("Error\n");
		return 1;
	}

	int num_bytes = atoi(argv[1]);
	if (num_bytes < 0) 
	{
		printf("Error\n");
		return 2;
	}

	unsigned char *code = (unsigned char *) main;
	for (int i = 0; i < num_bytes; i++) 
	{
		printf("%02x", code[i]);
	}
	printf("\n");

	return 0;
}
