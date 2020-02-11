#include <stdio.h>
#include "holberton.h"
/**
*print_last_digit - prints last digit of an int.
*
* @n : checked int
* Return: Always 0.
*/

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar('0' + digit);
	return (digit);
}
