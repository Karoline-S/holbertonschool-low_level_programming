#include "variadic_functions.h"

/**
 * print_strings - prints strings supplied as arguments, separated
 * by the string at separator
 * @separator: pointer to the string to print between arguments
 * @n: the number of arguments passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap1;
	va_list ap2;
	unsigned int i;

	va_start(ap, n);
	va_copy(ap2, ap1);

	i = 0;

	while (i < n)
	{
		if (va_arg(ap1 == NULL))
			printf("nil");

		if (i != 0 && separator != NULL)
			printf("%s%s", separator, va_arg(ap2, char *));

		else
			printf("%s", va_arg(ap2, char *));

		i++;
	}
	printf("\n");

	va_end(ap1);
	va_end(ap2);
}
