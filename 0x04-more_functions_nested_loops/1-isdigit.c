/**
* _isdigit - checks for digits.
* @c: The character to check
*
* Return: digit 1.
* 0 otherwise.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
