#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: the pointer that points to the string
 * Return: the value of i, which is the size of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * _puts - prints a string and new line to stdout using _putchar
 * @str: the string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int len;
	int element = 0;

	len = _strlen(str);
	while (len >= 0)
	{
		_putchar(str[element]);
		element++;
		len--;
	}
	_putchar('\n');
}
