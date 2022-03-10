#include "variadic_functions.h"

/**
 * print_all - prints anything supplied as an argument to the program
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int idx = 0, count = 0;
	char *string, *separator = "";

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
			count++;
			break;
		case 'i':
			printf("%s%d", separator, va_arg(ap, int));
			separator = ", ";
			count++;
			break;
		case 'f':
			printf("%s%f", separator, va_arg(ap, double));
			separator = ", ";
			count++;
			break;
		case 's':
			string = va_arg(ap, char *);
			if (string != NULL)
			{
				printf("%s%s", separator, string);
				separator = ", ";
				count++;
				break;
			}
			printf("%snil", separator);
			separator = ", ";
			count++;
			break;
		}
		idx++;
	}
	va_end(ap);

	while (count != 0)
	{
		printf("\n");
		break;
	}
}
