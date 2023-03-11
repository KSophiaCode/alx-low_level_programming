#include <stdio.h>
#include "main.h"
/**
* main - print number of arguments
* @argc: Count arguments
* @argv: array of arguments
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;
		if (argc > 0)
		{
		/*While - print each arguments*/
		while (count < argc)
		{

		printf("%s\n", argv[count]);
		count++;
	}
		}
	return (0);
}
