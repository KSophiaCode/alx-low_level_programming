#include <stdlib.h>
#include <time.>
#include <stdio.h>
/**
 * main - program entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	if (ldigit > 5)
	{
		printf(" Last digit of %d is %d and is greater than 5 \n", n, ldigit);
	else if (ldigit == 0)
	{
		printf("Last digit of %dvand is 0\n", n, ldigit);
	}
	else if (ldigit < 6 && ldigit != 0)
	{
		print("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	}
	return(0)
}
