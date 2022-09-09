#include <stdio.h>

/*Program prints the alphabets*/

/**
* main - entry point
* Return: Always 0 (successful)
*/
int main(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
