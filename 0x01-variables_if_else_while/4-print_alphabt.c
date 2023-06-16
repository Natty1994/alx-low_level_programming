#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char a = 'a';


	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
			a++;
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
