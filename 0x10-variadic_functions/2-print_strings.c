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
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	i = 0;

	while (i < n)
	{
		if (va_arg(ap, char *) == NULL)
		{
			printf("nil");
			break;
		}

		if (i != 0 && separator != NULL)
			printf("%s%s", separator, va_arg(ap, char *));

		else
			printf("%s", va_arg(ap, char *));

		i++;
	}
	printf("\n");
}
