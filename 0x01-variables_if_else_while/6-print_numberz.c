#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Prints digits 0-9 with putchar
*
*Return: Always 0 (Success)
*
*/
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
