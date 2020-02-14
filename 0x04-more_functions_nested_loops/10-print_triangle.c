#include "holberton.h"

/**
* print_triangle - prints triangle followed by new line.
* @size: size of triangle
* Return: nothing
**/

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, space, pound;

		i = 0;

		while (i < size)
		{
			space = i;

			while (space < size - 1)
			{
				_putchar(' ');
				space++;
			}
			pound = 0;

			while (pound <= i)
			{
				_putchar('#');
				pound++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
