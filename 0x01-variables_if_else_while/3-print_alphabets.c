#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the alphabet in lower and upper case
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char az = 'a', AZ = 'A';

	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	while (AZ <= 'Z')
	{
		putchar(AZ);
		AZ++;
	}
	putchar('\n');
	return (0);
}
