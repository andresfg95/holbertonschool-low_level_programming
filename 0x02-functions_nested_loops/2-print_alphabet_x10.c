#include "holberton.h"
/**
*print_alphabet_x10 - prints alphabet 10 times
*
*Return: Always 0.
*/

void print_alphabet_x10(void)
{
int repetition, abc;

	for (repetition = 0; repetition < 10; repetition++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');

	}
}
