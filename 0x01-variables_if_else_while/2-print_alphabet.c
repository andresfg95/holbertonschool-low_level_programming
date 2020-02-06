#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Prints the alphabet
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	putchar('\n');
	return (0);
}
