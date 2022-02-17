#include "main.h"

/**
 * *_strncpy - copies a string (src) to the pointer location (dest)
 * @dest: pointer to the string to be modified
 * @src: pointer to the string to be copied
 * @n: the number of bytes from src that can be used
 * Return: returns  pointer 2 (to modified string)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (*(src + count) != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
