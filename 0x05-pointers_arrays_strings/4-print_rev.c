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
 * print_rev - prints a string in reverse followed by a new line
 * to stdout using _putchar
 * @s: the string to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;
	int element;

	len = _strlen(s);
	element = len;
	while (len > 0)
	{
		_putchar(s[element]);
		element--;
		len--;
	}
	_putchar('\n');
}
