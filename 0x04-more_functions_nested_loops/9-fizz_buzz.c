#include <stdio.h>
/**
* main - prints 1 to 100 with Buzz Fizz and BuzzFizz
*
* Return: Always 0 (Success).
*/

int main(void)
{
	int i;

	i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0 || i % 15 == 0)
		{
			if (i % 3 == 0 && i % 15 != 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0 && i % 15 != 0)
			{
				printf("Buzz");
			}
			else if (i % 15 == 0)
			{
				printf("FizzBuzz");
			}
		}
		else
			printf("%d", i);

		if (i < 100)
		{
			printf(" ");
		}
	}
		printf("\n");
		return (0);
}
