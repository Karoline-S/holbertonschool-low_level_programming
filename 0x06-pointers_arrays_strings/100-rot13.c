#include "main.h"

/**
 * *rot13 - encodes a string with rot13.
 * @s: the string to be encoded
 * Return: a pointer to the altered string.
 */
char *rot13(char *s)
{
	char *alpha = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *code = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int a = 0;
	int c;

	while (s[a] != '\0')
	{
		c = 0;

		while (alpha[c] != '\0')
		{
			if (s[a] == alpha[c])
			{
				s[a] = code[c];
				break;
			}
			c++;
		}
		a++;
	}
	return (s);
}
