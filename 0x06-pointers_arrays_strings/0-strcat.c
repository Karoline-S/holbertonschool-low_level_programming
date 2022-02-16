#include "main.h"
#include <stdio.h>

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
 * *_strcat - appends the string at pointer 1 to the end of the string pointer
 * 2, overwriting the null byte and adding a terminating null byte
 * @dest: pointer to the string to be modified
 * @src: pointer to the string with the string to be copied
 * Return: returns  pointer 2 (to modified string)
 */
char *_strcat(char *dest, char *src)
{
	int destlen;
	int count = 0;

	destlen = _strlen(dest);
	printf("destlen is %d\n", destlen);

	while (*(src + count) != '\0')
	{
		dest[destlen] = src[count];
		destlen++;
		count++;
	}
	dest[destlen] = '\0';
	return (dest);
}
