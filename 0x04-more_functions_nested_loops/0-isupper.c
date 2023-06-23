/**
 * _isupper - check if is upper
 *
 * @c: input for alphabet
 *
 * Return: 1 if upercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
