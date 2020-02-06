#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints numbers 0-9 comma separated
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);

		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
