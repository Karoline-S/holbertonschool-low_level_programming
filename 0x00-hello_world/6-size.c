#include <stdio.h>

/**
 * main - the starting point, I think
 *
 * Return: This is where I describe what the return does
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;

  /* sizeof evaluates the size of a variable */
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
return (0);
}
