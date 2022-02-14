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
 * puts_half - prints half of a string followed by a new line
 * @str: the pointer to the string to be printed
 * Return: nothing
 */
void puts_half(char *str)
{
	int strlength;
	int strHalfSize;

	strlength = (_strlen(str));
	strHalfSize = (strlength - 1) / 2;

	if (strlength % 2 == 0)
	{
		while (strHalfSize < (strlength - 1) && *str != '\0')
		{
			_putchar(str[strHalfSize]);
			strHalfSize++;
		}
	}
	else
	{
		while (strHalfSize < (strlength - 1) && *str != '\0')
		{
			_putchar(str[strHalfSize]);
			strHalfSize++;
		}
	}
	_putchar('\n');
}
