#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Randomizes number and prints its state
*
*if - selects what to print
*
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
