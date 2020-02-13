#include "holberton.h"
/**
* more_numbers - prints numbers 0-14 ten times
*/

void more_numbers(void)
{
	int i, j, tens, ones;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tens = j / 10;
			ones = j % 10;
			if (j > 9)
			{
				_putchar(tens + '0');
			}
			_putchar(ones + '0');
		}
		_putchar('\n');
	}
}
