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
	if (x != 'q' && x != 'e')
	{
		putchar(x);
	}
}
putchar('\n');
return (0);
}
