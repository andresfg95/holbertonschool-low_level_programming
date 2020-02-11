#include "holberton.h"
/**
*times_table - prints 9 times 0.
*/
void times_table(void)
{
	int table, position, multiplier, digit, unit;

	table = 0;
	while (table <= 9)
	{
		position = 0;

		while (position <= 9)
		{
			multiplier = position * table;
			if (multiplier > 9)
			{
				digit = multiplier / 10;
				unit = multiplier % 10;
				_putchar(digit + '0');
				_putchar(unit + '0');
			}
			else
			{
				_putchar(multiplier + '0');
			}
			if (position < 9)
			{
				_putchar(',');
			}
			if ((table * (position + 1)) > 9 && position != 9)
			{

				_putchar(' ');
			}
			else if ((table * (position + 1)) <= 9 && position != 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			position++;
		}
		_putchar('\n');
		table++;
	}
}
