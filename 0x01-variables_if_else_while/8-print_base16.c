#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Prints hex numbers form binary
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char num = '0', ltr = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (ltr <= 'f')
	{
		putchar(ltr);
		ltr++;
	}
	putchar('\n');
	return (0);
}
