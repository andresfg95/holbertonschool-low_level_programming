#include "holberton.h"

/**
*print_alphabet -prints alpahbet in lower case
*
*return: Always 0 (Success).
*/

void print_alphabet(void)
{

	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
