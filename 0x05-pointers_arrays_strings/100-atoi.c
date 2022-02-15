#include "main.h"

/**
 * _isdigit - check if variable is a digit
 * @c: automatic variable
 * Return: Always 1 if digit, 0 otherwise.
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		c = 1;
	else
		c = 0;
	return (c);
}

/**
 * _isPosOrNeg - check if char is '-' or '+' and if yes, return a char
 * reflecting which symbol it is
 * @s: the string to be checked
 * Return: char a
 */
char _isPosOrNeg(char *s)
{
	int count = 0;
	int neg = 0;
	char a;

	while ((s[count] != '\0'))
	{
		if (s[count] == '-')
			neg++;
		count++;
	}
	if (neg % 2 != 0)
		a = '-';
	return (a);
}

/**
 * _atoi - creates an integer from the first string of digits in string
 * @s: the string to be used
 * Return: newly created integer string or 0 if no digits found
 */
int _atoi(char *s)
{
	int count = 0;
	char posOrNeg;
	int intFind;
	int convertInt;
	int tempInt;
	int strInt;
/*	int *ptrStrInt; */

	while (s[count] != '\0')
	{
/*		posOrNeg = _isPosOrNeg(s[count]); */
		intFind = _isdigit(s[count]);
		if (intFind == 1)
			break;
		count++;
	}
	convertInt = (int) (s[count] - 48);
	strInt = convertInt;
	tempInt = convertInt;
	count++;
	while (s[count] >= '0' && s[count] <= '9')
	{
		convertInt = (int) (s[count] - 48);
		strInt = (tempInt * 10) + convertInt;
		tempInt = strInt;
		count++;
	}
	posOrNeg = _isPosOrNeg(s);
	if (posOrNeg == '-')
	{
		strInt = strInt * -1;
	}
	if (intFind == 1)
		return (strInt);
	else
		return (0);
}
