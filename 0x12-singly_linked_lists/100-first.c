#include "lists.h"
#include <stdio.h>
/**
 * bmain - function that prints before main executes
 * Return: nothing
 */
void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow, \n");

	printf("I bore my house upon my back! \n");
}
