#include <stdio.h>

/**
* main - Entry point
*
* sizeof: gives the memory allocated
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %hu byte(s)\n", sizeof(char));
	printf("Size of an int: %hu byte(s)\n", sizeof(int));
	printf("Size of a long int: %hu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %hu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %hu byte(s)", sizeof(float));
	return (0);
}
