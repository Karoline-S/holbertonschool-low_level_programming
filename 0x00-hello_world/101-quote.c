#include <stdio.h>

/**
 * main - the starting point, I think
 *
 * Return: This is where I describe what the return does
 */

int main(void)

{

char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19"\n;

fwrite(str, 1, sizeof(str), stderr);

return (0);

}
