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

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d is ", n);
if (n == 0)
{
puts("zero");
}
else if (n > 0)
{
puts("positive");
}
else if (n < 0)
{
puts("negative");
}
return (0);
}
