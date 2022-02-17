#include "main.h"

/**
 * _ischar - checking for char a, A, e, E, o, O, t, T, l, L
 *@a: the ascii value char to be checked
 * Return: Always 1 if uppercase found or 0 if not.
 */
int _ischar(int a)
{
	if (a == 97 || a == 65 || a == 101 || a == 69 || a == 111 || a == 79)
		return (1);
	else if (a == 116 || a == 84 || a == 108 || a == 76)
		return (1);
	return (0);
}

/**
 * _codeSwap - swaps the char by providing a new ascii value
 *@a: ascii value int to be swapped
 * Return: nothing
 */
int _codeSwap(int a)
{
	if (a == 97)
		a = 52;
	else if (a == 65)
		a = 52;
	else if (a == 101)
		a = 51;
	else if (a == 69)
		a = 51;
	else if (a == 111)
		a = 48;
	else if (a == 79)
		a = 48;
	else if (a == 116)
		a = 55;
	else if (a == 84)
		a = 55;
	else if (a == 108)
		a = 49;
	else if (a == 76)
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
	int charFound;

	while (str[count] != '\0')
	{
		charFound = 0;
		charFound = _ischar(*(str + count));
		while (charFound == 1)
		{
			str[count] = _codeSwap(*(str + count));
			break;
		}
		count++;
	}
	return (str);
}
