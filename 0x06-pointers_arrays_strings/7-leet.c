#include "main.h"

/**
 * *leet - encodes a string) a/A=4, e/E=3, o/O=0, t/T=7, l/L=1.
 * @str: the string to be altered1
 * charFound = 1 when a char matches a coded char and 0 when not
 * Return: a pointer to the altered string.
 */
char *leet(char *str)
{
	char *alpha = "aAeEoOtTlL";
	char *num = "4433007711";
	int counta = 0;
	int countb;

	while (str[counta] != '\0')
	{
		countb = 0;

		while (alpha[countb] != '\0')
		{
			if (str[counta] == alpha[countb])
				str[counta] = num[countb];
			countb++;
		}
		counta++;
	}
	return (str);
}
