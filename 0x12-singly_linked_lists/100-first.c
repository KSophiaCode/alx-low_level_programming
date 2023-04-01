#include <stdio.h>
/**
 * in_the_beginning - function that prints before main executes
 * Return: nothing
 */
void_attribute_((constructor)) in_the_beginning()
{
	printf("You are beat! and yet, you must allow, \n");

	printf("I bore my house upon my back! \n");
}
