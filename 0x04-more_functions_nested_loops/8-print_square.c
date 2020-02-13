#include "holberton.h"
/**
*print_square - prints square followed by a new line
*
* @size : size of square
*/

void print_square(int size)
{

	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
