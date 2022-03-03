#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - gets the length of a string not including the null byte
 * @s: pointer to the string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * _strcpy - copies string at src into memory at dest
 * @dest: pointer to the space for string
 * @src: pointer to string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i;

	if (*src == '\0')
		return (dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _strncat - appends string at src to the end of string at dest
 * @dest: - pointer to the destination string
 * @src: - pointer to the copy string
 * @n: - the number of bytes (at most) to copy from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, unsigned int n)
{
	int destlen, i;

	destlen = _strlen(dest);

	i = 0;
	while (src[i] != '\0' && n > 0)
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
		n--;
	}
	dest[destlen] = '\0';
	return (dest);
}

/**
 * string_nconcat - concatenates 2 strings in newly created malloc memory
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes to take from s2
 * Return: NULL if fails or pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int length1, length2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = _strlen(s1);

	length2 = _strlen(s2);

	if (length2 < n)
		n = length2;

	newStr = malloc(sizeof(*s1) * (length1 + n + 1));

	if (newStr == NULL)
		return (NULL);

	newStr = _strcpy(newStr, s1);

	newStr = _strncat(newStr, s2, n);

	return (newStr);
}
