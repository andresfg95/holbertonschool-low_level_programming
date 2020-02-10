#include <unistd.h>

/**
* _putchar - Writes to stdout
*
*Retrun: 1 (success)
*/

int _putchar (char c)
{
	return (write(1, &c, 1));
}
