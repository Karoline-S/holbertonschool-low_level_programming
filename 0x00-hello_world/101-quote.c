#include <stdio.h>

/**
 * main - the starting point
 *
 * Return: describe what the return does
 */

int main(void)

{

  char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

  fwrite(str, 0,sizeof(str), stderr);

  return (1);

}
