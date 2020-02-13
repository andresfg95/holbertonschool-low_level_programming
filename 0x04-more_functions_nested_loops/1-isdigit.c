/**
* _isdigit - Checks for a digit 0 through 9
*
* @c : checked int
*
*Return: 1 if digit, zero otherwise.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
