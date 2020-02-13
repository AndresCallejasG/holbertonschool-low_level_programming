/**
* _isupper - checks for uppercase character.
* @c: The character to check
*
* Return: uppercase 1.
* 0 otherwise.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
