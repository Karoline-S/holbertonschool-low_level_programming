#include <stdlib.h>
#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: the string to be examined
 * Return: the number of chars in the string
 */
int _strlen(char *s)
{
	if (*s == '\0' || s == NULL)
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * is_one_or_zero - checks if a string contains only 1s and 0s
 * @s: the string to be checked
 * Return: 1 for true, 0 for false
 */
int is_one_or_zero(char *s)
{
	while (*s != '\0')
	{
		if (*s == '0' || *s == '1')
			s++;
		else
			return (0);
	}

	return (1);
}

/**
 * binary_to_uint - converts a string of ones and zeros to
 * the unsigned int equivalent
 * @b: the string to be converted
 * Return: unsigned int equivalent of binary string, or 0 if
 * string is empty or string contains chars other than 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, sum, two_pow, is_binary;
	int idx, str_length;

	if (b == NULL)
		return (0);

	str_length = _strlen((char *)b);
	if (str_length > 32)
		return (0);

	is_binary = is_one_or_zero((char *)b);
	if (is_binary == 0)
		return (0);

	two_pow = 2;
	idx = str_length - 1;
	sum = 0;
	while (idx >= 0)
	{
		n = 0;
		if (idx == str_length - 1)
		{
			sum = (b[idx] - '0');
		}
		else
		{
			n = ((b[idx] - '0') * two_pow);
			sum = sum + n;
			two_pow = two_pow * 2;
		}
		idx--;
	}

	return (sum);
}
