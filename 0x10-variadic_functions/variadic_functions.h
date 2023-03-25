#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/* function declarations go here */

#include <stdarg.h>
#include <stdio.h>

/* function that returns the sum of all its parameters */

int sum_them_all(const unsigned int n, ...);
int _putchar(char);

/* function that prints numbers, followed by a new line */

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
