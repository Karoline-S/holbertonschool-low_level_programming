#include "main.h"

/**
 * _islower - checking for uppercase char.
 *@c: automatice variable
 * Return: Always 1 if uppercase found or 0 if not.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		c = 1;
	else
		c = 0;
	return (c);
}

/**
 * *string_toupper - converts all lower case characters in a string
 * to uppercase.
 * @str: the string to be altered
 * Return: a pointer to the amended string.
 */
char *string_toupper(char *str)
{
	int count = 0;
	int lowerFound;

	while (str[count] != '\0')
	{
		lowerFound = _islower(*(str + count));
		if (lowerFound ==  1)
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}
