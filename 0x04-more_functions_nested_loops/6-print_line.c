#include "holberton.h"
/**
*print_line - draws a straightline
*
*@n : number of times _ gets printed
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n ; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
