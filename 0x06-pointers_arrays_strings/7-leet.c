#include "main.h"

/**
 * _codeSwap - swaps the char by providing a new ascii value
 *@a: ascii value int to be swapped
 * Return: nothing
 */
int _codeSwap(int a)
{
	if (a == 97 || a == 65)
		a = 52;
	else if (a == 101 || a == 69)
		a = 51;
	else if (a == 111 || a == 79)
		a = 48;
	else if (a == 116 || a == 84)
		a = 55;
	else if (a == 108 || a == 76)
		a = 49;
	return (a);
}

/**
 * *leet - encodes a string) a/A=4, e/E=3, o/O=0, t/T=7, l/L=1.
 * @str: the string to be altered
 * charFound = 1 when a char matches a coded char and 0 when not
 * Return: a pointer to the altered string.
 */
char *leet(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		str[count] = _codeSwap(str[count]);
		count++;
	}
	return (str);
}
