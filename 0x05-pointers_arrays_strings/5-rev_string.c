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
 * rev_string - reverses a string using a pointer
 * @s: the pointer to the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int length;
	int elementStart;
	int elementEnd;

	length = _strlen(s);
	elementStart = 0;
	elementEnd = length;

	while (length >= 0)
	{
		s[elementStart] = s[elementEnd];
		elementStart++;
		elementEnd--;
		length--;
	}
}
