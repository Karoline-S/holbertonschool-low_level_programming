#include "main.h"
#include <stdio.h>

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
 * puts2 - prints every second char in a string
 * @str: the pointer to the string to be printed
 * Return: nothing
 */
void puts2(char *str)
{
	int elementPos;
	int strSize;

	strSize = (_strlen(str) - 1) / 2;
	elementPos = 0;

	while (strSize > 0)
	{
		_putchar(str[elementPos]);
		elementPos = elementPos + 2;
		strSize--;
	}
	_putchar('\n');
}
