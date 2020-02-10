#include "holberton.h"

/**
* _islower - checks for lowercase letters.
*
*@c:int checked
*
* Return: 1 for success..
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
