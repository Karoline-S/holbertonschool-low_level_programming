#include "main.h"
#include <stdio.h>

/**
 * *match_find - checks to see if each char in two strings is matching
 * @s1: primary string to check
 * @s2: secondary string to compare with
 * Return: an integer which represents the first non-matching element on s1.
 */
int match_find(char *s1, char *s2)
{
	int count = 0;

	while (*(s1 + count) != '\0' && s1[count] == s2[count])
	{
		count++;
	}
	return (count);
}

/**
 * _strcmp - compares strings at pointers one and two and calculates the
 * integer difference between the ascii values of string one compared with
 * string two.
 * @s1: pointer to the primary string
 * @s2: pointer to the comparison string
 * Return: returns an integer (0 if the strings are exactly the same, and
 * a negative or positive integer reflecting the total value of the  ascii
 * differences.
 */

int _strcmp(char *s1, char *s2)
{
	int count;
	int diff;

	count = match_find(s1, s2);

	diff = (*(s1 + count) - *(s2 + count));
	return (diff);
}
