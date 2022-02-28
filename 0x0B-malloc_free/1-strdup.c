#include <stdlib.h>
/**
 * _strlen - length a string
 * @s: string in questions
 * Return: string length as an int
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _strdup - returns a pointer to a space in memory containing copy of a string
 * @str: the string to be copied
 *
 * Return: pointer to the memory allocation
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int size = _strlen(str);

	if (*str == '\0')
		return (0);

	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (0);

	while (*str != '\0')
	{
		*s = *str;
		s++;
		str++;
	}

	return (s - size);
}
