#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main (void)
{
  int q = sizeof (char);
  int a = sizeof (int);
  int b = sizeof (long int);
  int c = sizeof (long long int);
  int d = sizeof (float);

  printf ("Size of a char: %d byte(s)\n", q);
  printf ("Size of a int: %d byte(s)\n", a);
  printf ("Size of a long int: %d byte(s)\n", b);
  printf ("Size of a long long int: %d byte(s)\n", c);
  printf ("Size of a float: %d byte(s)\n", d);
  return (0);
}
