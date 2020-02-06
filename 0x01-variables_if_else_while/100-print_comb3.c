#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints numbers 00 to 99 comma separated
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if ((a * 10 + b) < (b * 10 + a))
			{
				putchar (a);
				putchar (b);

				if (!(a == 56 && b == 57))
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
