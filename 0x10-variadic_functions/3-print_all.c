#include "variadic_functions.h"

/**
 * _strlen - finds the length of a string
 * @s: the string to be examined
 * Return: the number of chars in the string as an int)
 */
int _strlen(const char * const s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * print_all - prints anything supplied as an argument to the program
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int idx;
	char *s;
	char *separator = "";

	if (format == NULL)
		return;

	va_start(ap, format);
	idx = 0;
	while (format[idx] != '\0')
	{
		switch (format[idx])
		{
		case 'c':
			printf("%s%c", separator, va_arg(ap, int));
			separator = ", ";
			break;
		case 'i':
			printf("%s%d", separator, va_arg(ap, int));
			separator = ", ";
			break;
		case 'f':
			printf("%s%f", separator, va_arg(ap, double));
			separator = ", ";
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s != NULL)
				printf("%s%s", separator, s);
			else
				printf("%snil", separator);
			separator = ", ";
			break;
		}
		idx++;
	}
	va_end(ap);
	printf("\n");
}
