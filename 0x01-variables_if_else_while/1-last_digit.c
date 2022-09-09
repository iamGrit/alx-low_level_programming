#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Program prints the last randomly generated number*/

/**
* main - entry point
* Return: Always 0 (successful)
*/
int main(void)
{

int n;
int ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
printf("Last digit of %d is %d and is ", n, ld);
if (ld == 0)
{
puts("0");
}
else if (n % 10 > 5)
{
puts("greater than 5");
}
else if (ld < 6)
{
puts("less than 6 and not 0");
}
return (0);
}
