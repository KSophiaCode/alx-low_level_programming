#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - prints all
* @format: list of arguments passed
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char c;
	void *ptr;

	va_start(args, format);
	while (format && format[i])
	{
	switch (format[i])
	{
	case 'c':
	c = (char) va_arg(args, int);
	printf("%c", c);
	case 'i':
	printf("%d", va_arg(args, int));
	case 'f':
	printf(("%f", (float) va_arg(args, double));
	case 's':
	str = va_arg(args, char *);
	if (str == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}
	}
	i++;
	if (format[i])
	{
	printf(", ");
	}
	}
	printf("\n");
	va_end(args);
	}
