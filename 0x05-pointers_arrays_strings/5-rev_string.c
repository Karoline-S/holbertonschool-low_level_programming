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
 * rev_string - reverses a string using a pointer
 * @s: the pointer to the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int midPoint;
	int elementStart;
	int elementEnd;
	char hold;

	midPoint = _strlen(s) / 2;;
	elementStart = 0;
	elementEnd = _strlen(s) - 1;

	while (midPoint >= 0)
	{
		hold = s[elementStart];
		s[elementStart] = s[elementEnd];
		s[elementEnd] = hold;
		elementStart++;
		elementEnd--;
		midPoint--;
	}
}
