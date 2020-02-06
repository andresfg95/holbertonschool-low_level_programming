#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Prints digits 0-9
*
*Return: Always 0 (Sucess)
*
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
