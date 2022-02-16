#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: pointer to the string
 * Return: the value of i, which is the size of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * *_strncpy - appends the string at pointer 1 to the end of the string pointer
 * 2, to a maximum of n bytes,  overwriting the existing terminating null byte
 * at pointer 1 and adding a new terminating null byte to the modified string.
 * @dest: pointer to the string to be modified
 * @src: pointer to the string with the string to be copied
 * @n: the number of bytes from src that can be used
 * Return: returns  pointer 2 (to modified string)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	int destlen;

	destlen = _strlen(dest);

	while (*(src + count) != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	if (count > destlen)
		dest[count] = '\0';
	return (dest);
}
