#include <stdio.h>

/**
*main - Prints digits 0-9 with putchar
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
