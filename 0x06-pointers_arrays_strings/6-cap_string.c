#include "main.h"

/**
 * _islower - checking for uppercase char.
 *@c: automatice variable
 * Return: Always 1 if uppercase found or 0 if not.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		c = 1;
	else
		c = 0;
	return (c);
}

/**
 * _isNewWord - checking for uppercase char.
 *@a: automatice variable
 * Return: Always 1 if uppercase found or 0 if not.
 */
int _isNewWord(int a)
{

	if (a == '?' || a == 9 || a == 10 || (a > 31 && a < 35))
		a = 1;
	else if ((a > 39 && a < 42) || a == ',' || a == '.' || a == ';')
		a = 1;
	else if (a == '{' || a == '}')
		a = 1;
	else if (a < 0 && a > 127)
		a = 1;
	else
		a = 0;
	return (a);
}


/**
 * *cap_string - capitalises the first letter of each word in a string.
 * @str: the string to be altered
 * Return: a pointer to the altered string.
 */
char *cap_string(char *str)
{
	int count = 0;
	int lowerFound;
	int letterFound;

	while (str[count] != '\0')
	{
		lowerFound = _islower(*(str + count));
		letterFound = _isNewWord(*(str + count - 1));
		if (lowerFound == 1 && letterFound == 1)
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}
