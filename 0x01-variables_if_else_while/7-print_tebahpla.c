#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Prints a mirrored alphabet
*
*Return: always 0 (Success)
*
*/
int main(void)
{
	char za = 'z';

	while (za >= 'a')
	{
		putchar(za);
		za--;
	}
	putchar('\n');
	return (0);
}
